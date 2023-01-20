// Fill out your copyright notice in the Description page of Project Settings.


#include "Track.h"

#include "Components/BoxComponent.h"

// Sets default values
ATrack::ATrack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene=CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent=Scene;

	Track=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TRACK"));
	Track->SetupAttachment(RootComponent);

	
	ColliderNext=CreateDefaultSubobject<UBoxComponent>(TEXT("ColliderNext"));
	ColliderNext->SetupAttachment(Track);

	ColliderSpawn=CreateDefaultSubobject<UBoxComponent>(TEXT("ColliderSpawn"));
	ColliderSpawn->SetupAttachment(Track);
	ColliderDestroy=CreateDefaultSubobject<UBoxComponent>(TEXT("ColliderDestroy"));
	ColliderDestroy->SetupAttachment(Track);

}

// Called when the game starts or when spawned
void ATrack::BeginPlay()
{
	Super::BeginPlay();

	//ColliderNext->OnComponentBeginOverlap.AddDynamic(this,&ATrack::SpawnNext);
	//ColliderSpawn->OnComponentBeginOverlap.AddDynamic(this,&ATrack::SpawnItems);
	//ColliderDestroy->OnComponentBeginOverlap.AddDynamic(this,&ATrack::DestroyPrevious);
	
}

// Called every frame
void ATrack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ATrack::SpawnNext(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ATrack::SpawnItems(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void ATrack::DestroyPrevious(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}