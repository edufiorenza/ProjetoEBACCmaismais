// Fill out your copyright notice in the Description page of Project Settings.

#include "AtorFlutuante.h"
#include "Logging/StructuredLog.h"

// Sets default values
AAtorFlutuante::AAtorFlutuante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TempoExecucao = 0.0f;
	DeltaAltura = 0.0f;
	NovaLocalizacao = FVector(0.0f, 0.0f, 0.0f);

}

// Called when the game starts or when spawned
void AAtorFlutuante::BeginPlay()
{
	Super::BeginPlay();	
}

void AAtorFlutuante::PrintName(FString Name)
{
	UE_LOGFMT(LogTemp, Warning, "O ator {Name} foi configurado com amplitude de {Amplitude}", Name, Amplitude);

}

// Called every frame
void AAtorFlutuante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	NovaLocalizacao = this->GetActorLocation();
	DeltaAltura = (FMath::Sin(TempoExecucao + DeltaTime) - FMath::Sin(TempoExecucao));
	NovaLocalizacao.Z += DeltaAltura * Amplitude;
	TempoExecucao += DeltaTime;
	this->SetActorLocation(NovaLocalizacao);

}

