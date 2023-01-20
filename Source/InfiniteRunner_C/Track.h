// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Track.generated.h"

UCLASS()
class INFINITERUNNER_C_API ATrack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrack();

	
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class USceneComponent* Scene;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UStaticMeshComponent* Track;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UBoxComponent* ColliderNext;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UBoxComponent* ColliderSpawn;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UBoxComponent* ColliderDestroy;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnNext( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	void SpawnItems( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	void DestroyPrevious( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	

};

