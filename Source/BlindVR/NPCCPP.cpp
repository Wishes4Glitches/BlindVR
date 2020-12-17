// Fill out your copyright notice in the Description page of Project Settings.
 
#include "NPCCPP.h"

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

	FVector Scale = FVector(5.0f, 5.0f, 5.0f);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetRelativeScale3D(Scale);
	Box->OnComponentBeginOverlap.AddDynamic(this, &ANPCCPP::BeginOverlap);
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

	Random = FMath::FRandRange(0, 4);
}

// Called to bind functionality to input
void ANPCCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCPP::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Random == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Why Hello There"));
	}
	else if (Random == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("What are you up too?"));
	}
	else if (Random == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("6 Feet apart please, COVID is still a thing"));
	}
	else if (Random == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Get Away from me"));
	}
	else if (Random == 4)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hey you"));
	}
}

void ANPCCPP::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Random == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Well it was nice meeting ya"));
	}
	else if (Random == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("See ya"));
	}
	else if (Random == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bye"));
	}
	else if (Random == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Didn't want you here anyways"));
	}
	else if (Random == 4)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("See ya later alligator"));
	}
}