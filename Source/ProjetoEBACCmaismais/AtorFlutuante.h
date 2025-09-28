// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtorFlutuante.generated.h"

UCLASS()
class PROJETOEBACCMAISMAIS_API AAtorFlutuante : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AAtorFlutuante();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Funcoes")
	void PrintName(FString Name);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propriedades")
	float Amplitude = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float TempoExecucao;
	float DeltaAltura;
	FVector NovaLocalizacao;



};
