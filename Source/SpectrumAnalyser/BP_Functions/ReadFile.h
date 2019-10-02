// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadFile.generated.h"

/**
 * 
 */
UCLASS()
class SPECTRUMANALYSER_API UReadFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Version", CompactNodeTitle = "ProjectVersion"), Category = "System Information")
		static FString GetProjectVersion();
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Song Names Available", CompactNodeTitle = "SongNamesAvailable"), Category = "System Information")
		static TArray<FString> GetSongNamesInsideFolder(); //path is hard coded for now

	//Generate a "random" dub
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Give Me Dubs", CompactNodeTitle = "GiveMeDubs"), Category = "System Information")
		static int32 GiveDubs();
	
};
