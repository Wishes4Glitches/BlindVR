// Fill out your copyright notice in the Description page of Project Settings.
 
#include "NPCCPP.h"
#include "GameFrameWork/CharacterMovementComponent.h"

// Sets default values
ANPCCPP::ANPCCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);

}

// Called when the game starts or when spawned
void ANPCCPP::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANPCCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

