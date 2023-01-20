// Fill out your copyright notice in the Description page of Project Settings.


#include "Hurdels.h"

// Sets default values
AHurdels::AHurdels()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HurdleMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent=HurdleMesh;
	HurdleMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AHurdels::BeginPlay()
{
	Super::BeginPlay();
	HurdleMesh->OnComponentBeginOverlap.AddDynamic(this,&AHurdels::AHurdels::CharacterStruck);
	
}

// Called every frame
void AHurdels::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHurdels::CharacterStruck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter_CPP* OverlappedCharacter=Cast<ACharacter_CPP>(OtherActor);
	if(OverlappedCharacter)
	{
		GEngine->AddOnScreenDebugMessage(1,15.0f,FColor::Red,TEXT("Character Overlapped"));
		OverlappedCharacter->CharacterStruck();
	}
}
