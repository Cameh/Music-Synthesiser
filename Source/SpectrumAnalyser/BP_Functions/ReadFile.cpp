// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadFile.h"
#include "Engine/ObjectLibrary.h"

FString UReadFile::GetProjectVersion() {
	FString ProjectVersion;
		GConfig->GetString(
			TEXT("/Script/EngineSettings.GeneralProjectSettings"),
			TEXT("ProjectVersion"),
			ProjectVersion,
			GGameIni
		);
	return ProjectVersion;
}

TArray<FString> UReadFile::GetSongNamesInsideFolder() {
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UWorld::StaticClass(), false, true);
	//HARD CODED PATH HERE!!!!
	ObjectLibrary->LoadAssetDataFromPath(TEXT("Game/AudioFiles"));
	TArray<FAssetData> AssetDatas;
	ObjectLibrary->GetAssetDataList(AssetDatas);
	UE_LOG(LogTemp, Warning, TEXT("Found Songs: %d"), AssetDatas.Num() / 2); //Display ItemsFound

	TArray<FString> Names = TArray<FString>();
	for (int32 i = 0; i < AssetDatas.Num(); i++)
	{
		FAssetData& AssetData = AssetDatas[i];

		auto name = AssetData.AssetName.ToString();
		Names.Add(name);
	}
	return Names;
	
}

int32 UReadFile::GiveDubs() {
	return 77;
}
