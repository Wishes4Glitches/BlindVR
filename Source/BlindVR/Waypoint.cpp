// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint.h"
#include "AIControllerCPP.h"

// Sets default values
AWaypoint::AWaypoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(Root);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	BoxComponent->SetupAttachment(GetRootComponent());
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AWaypoint::OnPlayerEnter);

}

// Called when the game starts or when spawned
void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWaypoint::OnPlayerEnter(UPrimitiveComponent* overlapComponent_, AActor* otherActor_, UPrimitiveComponent* otherComponent_, int32 otherBodyIndex_, bool bFromSweep_, const FHitResult& SweepResult_)
{
	AAIControllerCPP* Character = nullptr;
	if (otherActor_ != nullptr)
	{
		Character = Cast<AAIControllerCPP>(otherActor_);
		if (Character != nullptr)
		{
			Character->NextWaypoint = NextWaypoint;
		}
	}
}

