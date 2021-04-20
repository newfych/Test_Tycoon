// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_TycoonBaseBuilding.generated.h"


UCLASS()
class TEST_TYCOON_API ATest_TycoonBaseBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	ATest_TycoonBaseBuilding();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
