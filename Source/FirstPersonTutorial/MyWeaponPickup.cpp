// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWeaponPickup.h"

// Sets default values
AMyWeaponPickup::AMyWeaponPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	active = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;
}

// Called when the game starts or when spawned
void AMyWeaponPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyWeaponPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyWeaponPickup::Interacted()
{
	active = false;
	SetActorHiddenInGame(true);
}

bool AMyWeaponPickup::GetActive()
{
	return active;
}
