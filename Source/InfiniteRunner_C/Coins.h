// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coins.generated.h"

UCLASS()
class INFINITERUNNER_C_API ACoins : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoins();

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class URotatingMovementComponent* RotationComponent;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class AInfiniteRunner_CGameModeBase* MyGameMode;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void BeginOverlap( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};
