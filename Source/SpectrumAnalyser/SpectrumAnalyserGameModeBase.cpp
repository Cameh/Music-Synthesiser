// Fill out your copyright notice in the Description page of Project Settings.


#include "SpectrumAnalyserGameModeBase.h"
#include "MyPlayerController.h"

ASpectrumAnalyserGameModeBase::ASpectrumAnalyserGameModeBase()
{
	PlayerControllerClass = AMyPlayerController::StaticClass();
}