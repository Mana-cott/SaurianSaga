// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SaurianBaseCharacter.h"
#include "AbilitySystem/SaurianAbilitySystemComponent.h"
#include "AbilitySystem/SaurianAttributeSet.h"

// Sets default values
ASaurianBaseCharacter::ASaurianBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	SaurianAbilitySystemComponent = CreateDefaultSubobject<USaurianAbilitySystemComponent>(TEXT("SaurianAbilitySystemComponent"));

	SaurianAttributeSet = CreateDefaultSubobject<USaurianAttributeSet>(TEXT("SaurianAttributeSet"));
}

UAbilitySystemComponent* ASaurianBaseCharacter::GetAbilitySystemComponent() const
{
	return GetSaurianAbilitySystemComponent();
}

void ASaurianBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (SaurianAbilitySystemComponent)
	{
		SaurianAbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}
