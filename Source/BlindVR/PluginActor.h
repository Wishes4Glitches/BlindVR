// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PluginActor.generated.h"

UCLASS()
class BLINDVR_API APluginActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APluginActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	AActor* player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Root")
	USceneComponent* root;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	FRotator lookAtRot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	FVector actorDistance;
};
