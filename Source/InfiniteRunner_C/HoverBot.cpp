// Fill out your copyright notice in the Description page of Project Settings.


#include "HoverBot.h"

// Sets default values
AHoverBot::AHoverBot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHoverBot::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHoverBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

