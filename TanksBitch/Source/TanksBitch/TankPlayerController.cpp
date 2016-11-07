// Fill out your copyright notice in the Description page of Project Settings.

#include "TanksBitch.h"
#include "TankPlayerController.h"


ATank* ATankPlayerController::GetControlledTank() const {
	ATank* Tank =  Cast<ATank>(GetPawn()); 
	if (Tank) {
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank name is: %s:"), *Tank->GetName())
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Not Controlling any tank"))
	}
	return Tank;
}

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	ATank* ControlledTank = GetControlledTank();
	UE_LOG(LogTemp, Warning, TEXT("Tank Player Controller Begin Play"))

}
