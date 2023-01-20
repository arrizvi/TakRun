// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character_CPP.h"
#include "GameFramework/Actor.h"
#include "Hurdels.generated.h"

UCLASS()
class INFINITERUNNER_C_API AHurdels : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHurdels();

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UStaticMeshComponent* HurdleMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CharacterStruck( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};

