// Fill out your copyright notice in the Description page of Project Settings.


#include "Content/Assets/Scripts/TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it. 
	// Tells script to run every frame = true
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//Update \\ Code Running Every Frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

