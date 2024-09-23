// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MisinjeonPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class Y2S3_MISINJEON_API AMisinjeonPlayerController : public APlayerController
{
	GENERATED_BODY()


public:
	

protected:
	// ������ ���۵� �� HUD�� ȭ�鿡 ǥ��
	virtual void BeginPlay() override;

private:
	// HUD�� ����� ���� ��������Ʈ Ŭ����
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HUDClass;

	// ������ HUD ���� �ν��Ͻ�
	UPROPERTY()
	UUserWidget* HUD;
};