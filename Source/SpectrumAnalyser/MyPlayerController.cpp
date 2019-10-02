// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"


AMyPlayerController::AMyPlayerController()
{
	//bShowMouseCursor = true;
	


}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (wFolderViewUI) // Check if the Asset is assigned in the blueprint.
	{
		// Create the widget and store it.
		MyFolderView = CreateWidget<UUserWidget>(this, wFolderViewUI);
		

		// now you can use the widget directly since you have a referance for it.
		// Extra check to  make sure the pointer holds the widget.
		if (MyFolderView)
		{
			//let add it to the view port
			MyFolderView->AddToViewport();
		}

		//Show the Cursor.
		bShowMouseCursor = true;
	}

	
	

}