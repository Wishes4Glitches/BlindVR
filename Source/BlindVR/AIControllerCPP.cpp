// Fill out your copyright notice in the Description page of Project Settings.

#include "AIControllerCPP.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AAIControllerCPP::AAIControllerCPP()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFOV;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AAIControllerCPP::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}

//Where we dropping bois

void AAIControllerCPP::BeginPlay()
{
	Super::BeginPlay();

	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All Systems Set"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Perception Error occured"));
	}
}

void AAIControllerCPP::OnPossess(APawn * Pawn_)
{
	Super::OnPossess(Pawn_);
}

void AAIControllerCPP::Tick(float DeltaSeconds_)
{
	Super::Tick(DeltaSeconds_);
}

FRotator AAIControllerCPP::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}
	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AAIControllerCPP::OnPawnDetected(const TArray<AActor*>& DetectedPawns_)
{

}
