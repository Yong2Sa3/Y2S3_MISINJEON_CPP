// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MisinjeonPlayerController.generated.h"

UCLASS()
class Y2S3_MISINJEON_API AMisinjeonPlayerController : public APlayerController
{
    GENERATED_BODY()
public:

    // HUD ������ ������ �� �ִ� �Լ�
    UFUNCTION(BlueprintCallable, Category = "HUD")
    UUserWidget* GetHUDWidget() const { return HUD; }

protected:
    // ������ ���۵� �� HUD�� ȭ�鿡 ǥ��
    virtual void BeginPlay() override;


private:

    // HUD�� ����� ���� �������Ʈ Ŭ����
    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<class UUserWidget> HUDClass;

    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<UUserWidget> GameOverWidgetClass;
    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<UUserWidget> MainMenuWidgetClass;

    // ������ HUD ���� �ν��Ͻ�
    UPROPERTY()
    UUserWidget* HUD;
    UPROPERTY()
    UUserWidget* GameOverWidget;
    // ������ MainMenu ���� �ν��Ͻ�
    UPROPERTY()
    UUserWidget* MainMenuWidget;
};
