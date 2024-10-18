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
<<<<<<< HEAD
=======

void AMisinjeonPlayerController::OpenUI(TSubclassOf<UUserWidget> UIClass)
{
    if (UIClass)
    {
        UUserWidget* NewUI = CreateWidget<UUserWidget>(this, UIClass);
        UIStack.Add(NewUI);
       // NewUI->AddToViewport();
       // SetFocusToTopUI();
    }
}

void AMisinjeonPlayerController::CloseTopUI()
{
    if (UIStack.Num() > 0)
    {
        UUserWidget* TopUI = UIStack.Last();
        UIStack.Pop();
        TopUI->RemoveFromParent();
        SetFocusToTopUI();
    }
}

void AMisinjeonPlayerController::SetFocusToTopUI()
{
    if (UIStack.Num() > 0)
    {
        UUserWidget* TopUI = UIStack.Last();
        SetWidgetFocus(TopUI);
    }
}

void AMisinjeonPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction("UIBack", IE_Pressed, this, &AMisinjeonPlayerController::HandleUIBack);
}

void AMisinjeonPlayerController::HandleUIBack()
{
    if (UIStack.Num() > 1)
    {
        CloseTopUI();
    }
    else if (UIStack.Num() == 1)
    {
        // ���� �Ͻ����� ���� �Ǵ� �ٸ� ����
    }
}

void AMisinjeonPlayerController::SetWidgetFocus(UUserWidget* Widget)
{
    if (Widget && Widget->IsValidLowLevel())
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(Widget->TakeWidget());
        SetInputMode(InputMode);
        bShowMouseCursor = true;
    }
}
>>>>>>> origin/develop
