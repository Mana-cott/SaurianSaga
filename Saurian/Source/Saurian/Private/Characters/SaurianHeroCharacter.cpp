// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SaurianHeroCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "Components/Input/SaurianInputComponent.h"
#include "SaurianGameplayTags.h"

ASaurianHeroCharacter::ASaurianHeroCharacter()
{
	PrimaryActorTick.bCanEverTick = true; 
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 350.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 0.f);
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->CameraLagSpeed = 12.f;
	CameraBoom->bEnableCameraRotationLag = true;
	CameraBoom->CameraRotationLagSpeed = 12.f;
	CameraBoom->bDoCollisionTest = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 450.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
}

void ASaurianHeroCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Controller)
	{
		return;
	}

	if (bIsCenteringCamera)
	{
		const FRotator CurrentRotation = Controller->GetControlRotation();
		const FRotator TargetRotation = FRotator(CameraPitch, GetActorRotation().Yaw, 0.f);
		const FRotator NewControllerRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, CameraCenterSpeed);

		Controller->SetControlRotation(NewControllerRotation);

		const float YawDelta = FMath::Abs(FRotator::NormalizeAxis(CurrentRotation.Yaw - TargetRotation.Yaw));
		const float PitchDelta = FMath::Abs(FRotator::NormalizeAxis(CurrentRotation.Pitch - TargetRotation.Pitch));

		if (YawDelta < 1.0f && PitchDelta < 1.0f)
		{
			Controller->SetControlRotation(TargetRotation);
			bIsCenteringCamera = false;
		}
		return;
	}

	if (LastCenterCameraTime < AutoFollowDelay)
	{
		LastCenterCameraTime += DeltaTime;
		return;
	}

	// Auto Follow Camera

	const FRotator CurrentRotation = Controller->GetControlRotation();
	const FRotator TargetRotation = FRotator(CameraPitch, GetActorRotation().Yaw, 0.f);
	const FRotator NewControllerRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, AutoFollowSpeed);

	Controller->SetControlRotation(NewControllerRotation);
}

void ASaurianHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void ASaurianHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid Data Asset as Input Config"));

	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(Subsystem);

	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	USaurianInputComponent* SaurianInputComponent = CastChecked<USaurianInputComponent>(PlayerInputComponent);
	
	// movement
	SaurianInputComponent->BindNativeInputAction(InputConfigDataAsset, SaurianGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move);
	SaurianInputComponent->BindNativeInputAction(InputConfigDataAsset, SaurianGameplayTags::InputTag_Jump, ETriggerEvent::Triggered, this, &ThisClass::Input_Jump);
	
	// camera
	SaurianInputComponent->BindNativeInputAction(InputConfigDataAsset, SaurianGameplayTags::InputTag_Camera_RotateLeft, ETriggerEvent::Triggered, this, &ThisClass::Input_RotateCameraLeft);
	SaurianInputComponent->BindNativeInputAction(InputConfigDataAsset, SaurianGameplayTags::InputTag_Camera_RotateRight, ETriggerEvent::Triggered, this, &ThisClass::Input_RotateCameraRight);
	SaurianInputComponent->BindNativeInputAction(InputConfigDataAsset, SaurianGameplayTags::InputTag_Camera_Center, ETriggerEvent::Triggered, this, &ThisClass::Input_CenterCamera);
}

void ASaurianHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (Controller)
	{
		FRotator CurrentRotation = Controller->GetControlRotation();
		CurrentRotation.Pitch = CameraPitch;
		Controller->SetControlRotation(CurrentRotation);
	}
}

void ASaurianHeroCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();

	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);

	if (MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);

		AddMovementInput(ForwardDirection, MovementVector.Y);
	}

	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);

		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ASaurianHeroCharacter::Input_Jump(const FInputActionValue& InputActionValue)
{
	Super::Jump();
}

void ASaurianHeroCharacter::Input_RotateCameraLeft(const FInputActionValue& InputActionValue)
{
	if (InputActionValue.Get<float>() != 0.f)
	{
		bIsCenteringCamera = false;
		LastCenterCameraTime = 0.f;
		AddControllerYawInput(-CameraRotationSpeed * GetWorld()->GetDeltaSeconds());
	}
}

void ASaurianHeroCharacter::Input_RotateCameraRight(const FInputActionValue& InputActionValue)
{
	if (InputActionValue.Get<float>() != 0.f)
	{
		bIsCenteringCamera = false;
		LastCenterCameraTime = 0.f;
		AddControllerYawInput(CameraRotationSpeed * GetWorld()->GetDeltaSeconds());
	}
}

void ASaurianHeroCharacter::Input_CenterCamera(const FInputActionValue& InputActionValue)
{
	bIsCenteringCamera = true;
}
