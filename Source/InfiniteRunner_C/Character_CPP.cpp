// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_CPP.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACharacter_CPP::ACharacter_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	CharacterMesh=CreateDefaultSubobject<USkeletalMesh>(TEXT("CharacterMesh"));
	//CharacterMesh

	SpringArm=CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bUsePawnControlRotation=false;
	SpringArm->TargetArmLength=400.0f;

	Camera=CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation=false;*/
	
}

// Called when the game starts or when spawned
void ACharacter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACharacter_CPP::CharacterStruck()
{
	
}

