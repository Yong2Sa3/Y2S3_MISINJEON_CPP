// Fill out your copyright notice in the Description page of Project Settings.


#include "MisinjeonPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Button.h"

void AMisinjeonPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // HUDClass�� �Ҵ�� �������Ʈ ������ �ִ��� Ȯ��
    if (HUDClass != nullptr)
    {
        HUD = CreateWidget<UUserWidget>(this, HUDClass);
        if (HUD != nullptr)
        {
            // HUD�� ȭ�鿡 �߰�
            HUD->AddToViewport();
        }
    }
}