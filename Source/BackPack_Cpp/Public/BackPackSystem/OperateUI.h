// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "OperateUI.generated.h"

/**
 * 
 */
UCLASS()
class BACKPACK_CPP_API UOperateUI : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem",meta = (BindWidget))
	TObjectPtr<UButton> UseButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem",meta = (BindWidget))
	TObjectPtr<UButton> ThrowButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BackPackSytstem")
	int32 SlotIndex;  // 在使用物品时，通过这个SlotIndex去定位数组中的这个物品
	
	UFUNCTION(BlueprintCallable,Category="BackPackSystem")
	void OnUseButtonClick();
	UFUNCTION(BlueprintCallable,Category="BackPackSystem")
	void OnThrowButtonClick();
};
