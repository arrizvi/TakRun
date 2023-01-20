// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character_CPP.h"
#include "Coins.h"
#include "HoverBot.h"
#include "Hurdels.h"
#include "GameFramework/GameModeBase.h"
#include "InfiniteRunner_CGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class INFINITERUNNER_C_API AInfiniteRunner_CGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int32 Score;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<ACoins> CoinsRef;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<AHurdels> HurdlesRef;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<AHoverBot> HoverbotRef;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<ACharacter_CPP> CharacterRef;

	virtual void BeginPlay() override;
};
