// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/SaurianBaseCharacter.h"
#include "SaurianHeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UDataAsset_InputConfig;
struct FInputActionValue;
/**
 * 
 */
UCLASS()
class SAURIAN_API ASaurianHeroCharacter : public ASaurianBaseCharacter
{
	GENERATED_BODY()

public:
	ASaurianHeroCharacter();
	virtual void Tick(float DeltaTime) override;

protected:
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
#pragma endregion

#pragma region CameraSettings

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float CameraPitch = -15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float CameraRotationSpeed = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float CameraCenterSpeed = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float AutoFollowSpeed = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float AutoFollowDelay = 0.5f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	bool bIsCenteringCamera = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float LastCenterCameraTime = 0.f;

#pragma endregion

#pragma region Inputs

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	UDataAsset_InputConfig* InputConfigDataAsset;

	// movement
	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Jump(const FInputActionValue& InputActionValue);

	// camera
	void Input_RotateCameraLeft(const FInputActionValue& InputActionValue);
	void Input_RotateCameraRight(const FInputActionValue& InputActionValue);
	void Input_CenterCamera(const FInputActionValue& InputActionValue);

#pragma endregion
};
