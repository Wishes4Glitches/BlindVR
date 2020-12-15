// Fill out your copyright notice in the Description page of Project Settings.
 
#include "NPCCPP.h"
#include "GameFrameWork/CharacterMovementComponent.h"

// Sets default values
ANPCCPP::ANPCCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	//Box->OnComponentBeginOverlap
	//Box->OnComponentBeginOverlap.AddDynamic(this, ANPCCPP::OnBoxBeginOverlap);
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

void ANPCCPP::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{

	}
}