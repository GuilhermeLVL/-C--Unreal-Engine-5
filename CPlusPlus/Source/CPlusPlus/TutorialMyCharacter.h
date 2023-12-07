// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TutorialMyCharacter.generated.h"

UCLASS()
class CPLUSPLUS_API ATutorialMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATutorialMyCharacter();

	UFUNCTION(BlueprintCallable, category = "Abilities")
	void SpawnActor();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> actorBPToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
