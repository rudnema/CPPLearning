// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacles/Obstacle_Base.h"

// Sets default values
AObstacle_Base::AObstacle_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObstacle_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstacle_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

