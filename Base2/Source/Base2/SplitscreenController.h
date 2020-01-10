// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameViewportClient.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplitscreenController.generated.h"

UCLASS()
class BASE2_API ASplitscreenController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplitscreenController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "splitscreen")
	static void OnToggleSplitScreen(AActor* Context, bool bStatus);
};
