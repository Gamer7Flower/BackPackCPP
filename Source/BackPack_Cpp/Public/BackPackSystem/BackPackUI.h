// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/Button.h"
#include "Gameplay/MyBaseGameInstance.h"
#include "BackPackUI.generated.h"

/**
 * 
 */
class UBackPackSlot;
UCLASS()
class BACKPACK_CPP_API UBackPackUI : public UUserWidget
{
	GENERATED_BODY()

	
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem",meta = (BindWidget))
	TObjectPtr<UUniformGridPanel> BackPackPanel;  // 统一网格面板
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem",meta = (BindWidget))
	TObjectPtr<UButton> CloseButton;  // 关闭背包按钮
	
	int32 SlotCount = 16;  //背包允许存在格子数量

	UPROPERTY()
	UBackPackSlot* BackPackSlot;  // 提前声明SlotUI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem")
	TArray<FItem_Struct> BackPackTransfer;  // 用于构造时从GameInstance中复制数组数据
	UFUNCTION(BlueprintCallable,Category="BackPackSystem")
	void RefreshBackPack();

	UFUNCTION(BlueprintCallable,Category="BackPackSystem")
	void OnCloseButtonClick();
	
// protected:
// 	virtual FEventReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
};
