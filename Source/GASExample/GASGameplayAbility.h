// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GASExample.h"
#include "GASGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GASEXAMPLE_API UGASGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UGASGameplayAbility();

	// Abilities with this set will automatically activate when the input is pressed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;
};
