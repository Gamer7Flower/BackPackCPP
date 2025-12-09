// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/DataTable.h"
#include "MyBaseGameInstance.generated.h"

/**
 * 将背包物品保存在游戏实例中，因为这个背包物品数组是全局实时变化的
 */
class UMeshComponent;
// 物品类型枚举
UENUM(BlueprintType)
enum class EItem_Type : uint8
{
	Weapon UMETA(DisplayName = "Weapon"),
	Prop UMETA(DisplayName = "Prop"),
	Food UMETA(DisplayName = "Food")
};
// 物品结构体
USTRUCT(BlueprintType)
struct FItem_Struct : public FTableRowBase  // 标记，在蓝图中创建DataTable
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString Name;  // 物品名
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Index;  // 索引
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UTexture2D* Icon;  // 图标
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Count;  // 当前数量
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Max_Count;  // 最大数量
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool Can_Stack;  // 是否可堆叠
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	EItem_Type Item_Type;  // 物品类型
};
UCLASS()
class BACKPACK_CPP_API UMyBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FItem_Struct> BackPack_Array;  // 游戏实例中的背包物品，可全局保存和使用
};
