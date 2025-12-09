// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Gameplay/MyBaseGameInstance.h"
#include "ItemBase.generated.h"


UCLASS()
class BACKPACK_CPP_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	

	AItemBase();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="BackPackSystem")
	FItem_Struct CurrentItemState;  // 存储当前物品的所有信息
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Comp")
	USphereComponent* SphereComp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Comp")
	UStaticMeshComponent* MeshComp;


protected:
	// 重写重叠事件
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
							  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
							  bool bFromSweep, const FHitResult& SweepResult);
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
							  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
							  bool bFromSweep, const FHitResult& SweepResult);
};
