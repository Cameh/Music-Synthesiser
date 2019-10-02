// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetFolders.generated.h"

/**
 * 
 */
UCLASS()
class SPECTRUMANALYSER_API UGetFolders : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		 /** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */
 UFUNCTION(BlueprintPure, Category = "VictoryBPLibrary|File IO")
 static bool JoyFileIO_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
 

};
