// Fill out your copyright notice in the Description page of Project Settings.

#include "TanksBitch.h"
#include "TankAIController.h"

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

void ATankAIController::BeginPlay() {
	Super::BeginPlay();
	ATank* ControlledTank = GetControlledTank();
	UE_LOG(LogTemp, Warning, TEXT("Tank AI Begin Play"))

}



