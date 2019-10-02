// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpectralVisualiser.generated.h"

UCLASS()
class SPECTRUMANALYSER_API ASpectralVisualiser : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpectralVisualiser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	void Refresh();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class UTimeSynthComponent* TimeSynthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class UTimeSynthClip* TimeSynthClip;

	UPROPERTY(EditAnywhere, Category = "Audio")
	TArray<UStaticMeshComponent*> SpectrumBars;

	UPROPERTY(EditAnywhere, Category = "Audio")
	UStaticMesh* SpectrumBarMesh;

	//This is the amount of spacing between each bar
	UPROPERTY(EditAnywhere, Category = "Audio")
	float SpectrumBarSpacing;

	//This is the amount of spacing for the Y axis
	UPROPERTY(EditAnywhere, Category = "Audio")
	float SpectrumBarY;

	//This is the amount of spacing for the Z axis
	UPROPERTY(EditAnywhere, Category = "Audio")
	float SpectrumBarZ;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Audio")
	UMaterialInstanceDynamic* matInstance;

	UPROPERTY(VisibleDefaultsOnly, Category = "Audio")
	float valueCount;

	UPROPERTY(VisibleDefaultsOnly, Category = "Audio")
	FVector BarScale;


	

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
