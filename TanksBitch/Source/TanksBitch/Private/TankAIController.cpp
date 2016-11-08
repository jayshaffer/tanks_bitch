// Fill out your copyright notice in the Description page of Project Settings.

#include "TanksBitch.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay() {
	Super::BeginPlay();
	ATank* ControlledTank = GetControlledTank();
	UE_LOG(LogTemp, Warning, TEXT("Tank AI Begin Play"))
	ATank* PlayerTank = GetPlayerTank();
	if (PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Controller found player tank: %s"), *PlayerTank->GetName())
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AI Controller did not find player tank"))
	}
}



ATank* ATankAIController::GetControlledTank() const {
	ATank* Tank = Cast<ATank>(GetPawn());
	if (Tank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Tank name is: %s:"), *Tank->GetName())
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AI not controlling tank"))
	}
	return Tank;
}

ATank* ATankAIController::GetPlayerTank() const {
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) {
		return nullptr;
	}
	return Cast<ATank>(PlayerPawn);
}