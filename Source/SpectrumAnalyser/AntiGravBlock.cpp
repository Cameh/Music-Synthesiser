// Fill out your copyright notice in the Description page of Project Settings.


#include "AntiGravBlock.h"

// Sets default values
AAntiGravBlock::AAntiGravBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AntiGravMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shape"));
	

	AntiGravMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	AntiGravMesh->SetSimulatePhysics(true);
	AntiGravMesh->WakeRigidBody();
}

// Called when the game starts or when spawned
void AAntiGravBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAntiGravBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AntiGravMesh->SetPhysicsLinearVelocity(FVector(0.f, 0.f, AntiGravMesh->GetMass() / 1.5f), true, "None");

}

