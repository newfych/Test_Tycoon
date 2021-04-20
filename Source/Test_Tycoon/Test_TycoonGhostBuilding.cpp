// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_TycoonGhostBuilding.h"



ATest_TycoonGhostBuilding::ATest_TycoonGhostBuilding()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	BaseMeshComponent->SetupAttachment(GetRootComponent());

}

void ATest_TycoonGhostBuilding::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATest_TycoonGhostBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

