// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BackPackSlot.generated.h"

/**
 * 
 */
class UTexture2D;
class UTextBlock;
class UImage;
class ABackPack_CppCharacter;
UCLASS()
class BACKPACK_CPP_API UBackPackSlot : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "BackPackSystem" , meta = (BindWidget))
	TObjectPtr<UImage> SlotImage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "BackPackSystem" , meta = (BindWidget))
	TObjectPtr<UTextBlock> Number_Text;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "BackPackSystem")
	int32 Index = -1;  // 外部传入，如果有东西就是对应物品在数组中的索引，如果没有就是-1
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "BackPackSystem")
	int32 Number = 0;  // 外部传入，物品数量
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "BackPackSystem")
	TObjectPtr<UTexture2D> Image;  // 外部传入，物品图标

	void SetSlot();

	UPROPERTY()
	ABackPack_CppCharacter* Player;
	
	UPROPERTY()
	UBackPackSlot* Payload;

protected:
	  
    // 重写函数：当鼠标按下时
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	
	// 重写函数：当检测到拖动时
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	
	// 重写函数：当拖动释放时
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation ) override;
	
};
