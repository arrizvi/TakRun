// Fill out your copyright notice in the Description page of Project Settings.


#include "Coins.h"

#include "Character_CPP.h"
#include "InfiniteRunner_CGameModeBase.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACoins::ACoins()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetSimulatePhysics(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	RotationComponent=CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingComponent"));
	RotationComponent->Activate(false);
}

// Called when the game starts or when spawned
void ACoins::BeginPlay()
{
	Super::BeginPlay();
	MyGameMode=Cast<AInfiniteRunner_CGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	Mesh->OnComponentBeginOverlap.AddDynamic(this,&ACoins::BeginOverlap);
}

// Called every frame
void ACoins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACoins::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter_CPP* OverlapedActor=Cast<ACharacter_CPP>(OtherActor);
	if(OverlapedActor)
	{
		MyGameMode->Score=MyGameMode->Score+1;			
		GEngine->AddOnScreenDebugMessage(1,20,FColor::Cyan,FString("Here is the character %d",MyGameMode->Score));
	}
	
}

