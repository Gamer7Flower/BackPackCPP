// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OperateUI.h"
#include "Components/ActorComponent.h"
#include "Gameplay/MyBaseGameInstance.h"
#include "BackPackComponent.generated.h"

/*
* 所有与背包相关的功能都写在这里
* 1.对物品的添加丢弃使用等
* 2.控制BackPackUI，OperateUI
* */
class UBackPackUI;
class UOperateUI;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BACKPACK_CPP_API UBackPackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UBackPackComponent();

protected:

	virtual void BeginPlay() override;

public:

	// ***功能***
	void AddItem(FItem_Struct AddItem);
	
	void ThrowItem(int32 SlotIndex);
	AActor* SpawnActorClass(const FString &Name);

	UFUNCTION(BlueprintCallable,Category= "BackPackSystem")
	void SwapItem(int32 DragIndex , int32 DropIndex);

	
	// ***管理控件***
	UPROPERTY()
	UOperateUI* OperateUI;
	bool bHasOperateUI;  // 标识OperateUI是否存在
	void SetOperateUI(int32 SlotIndex);

	
	
	UPROPERTY()
	UBackPackUI* BackPackUI;
	bool bIsOpenBackPack = false;  // 标识BackPackUI是否存在
	UFUNCTION(BlueprintCallable,Category= "BackPackSystem")
	void BackPackUIController();

	

		
};
