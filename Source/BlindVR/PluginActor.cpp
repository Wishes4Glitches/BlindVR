// Fill out your copyright notice in the Description page of Project Settings.


#include "PluginActor.h"

// Sets default values
APluginActor::APluginActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APluginActor::BeginPlay()
{
	Super::BeginPlay();
	
	player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	root = RootComponent;
}

// Called every frame
void APluginActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	lookAtRot = UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), player->GetActorLocation());

	root->SetWorldRotation(player->GetActorRotation());

	//actorDistance.Z = player->GetActorLocation().Z;
	actorDistance = FVector(root->GetComponentLocation().X, root->GetComponentLocation().Y, player->GetActorLocation().Z);

	root->SetWorldLocation(actorDistance);

	bReplicates = true;
}

