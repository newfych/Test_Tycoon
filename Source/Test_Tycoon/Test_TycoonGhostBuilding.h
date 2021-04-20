// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
//#include "Test_TycoonPlayerController.h"
#include "Test_TycoonGhostBuilding.generated.h"

UCLASS()
class TEST_TYCOON_API ATest_TycoonGhostBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	ATest_TycoonGhostBuilding();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BaseMeshComponent;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variables")
	//ATest_TycoonPlayerController* ControllerRef;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
