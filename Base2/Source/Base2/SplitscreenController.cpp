// Fill out your copyright notice in the Description page of Project Settings.


#include "SplitscreenController.h"
#include "Base2.h"
#include "Engine/GameViewportClient.h"

// Sets default values
ASplitscreenController::ASplitscreenController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplitscreenController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplitscreenController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplitscreenController::OnToggleSplitScreen(AActor* Context, bool bStatus)
{
	if (Context)
	{
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(bStatus);
	}
}

