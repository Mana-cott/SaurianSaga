// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SaurianBaseCharacter.generated.h"

class USaurianAbilitySystemComponent;
class USaurianAttributeSet;
UCLASS()
class SAURIAN_API ASaurianBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASaurianBaseCharacter();

	//~ Begin IAbilitySystemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End IAbilitySystemInterface Interface

protected:
	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	USaurianAbilitySystemComponent* SaurianAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	USaurianAttributeSet* SaurianAttributeSet;

public:
	FORCEINLINE USaurianAbilitySystemComponent* GetSaurianAbilitySystemComponent() const {
		return SaurianAbilitySystemComponent;
	}

	FORCEINLINE USaurianAttributeSet* GetSaurianAttributeSet() const {
		return SaurianAttributeSet;
	}
};
