// Fill out your copyright notice in the Description page of Project Settings.


#include "BackPackSystem/ItemBase.h"
#include "BackPack_Cpp/BackPack_CppCharacter.h"


// Sets default values
AItemBase::AItemBase()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = SphereComp;  // 设置根组件
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	MeshComp->SetupAttachment(SphereComp);

	// 绑定事件
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnSphereBeginOverlap);
}


void AItemBase::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor!= this)
	{
		if (OtherActor->ActorHasTag("Player"))  // 直接用标签去判断
		{
			ABackPack_CppCharacter* Player = Cast<ABackPack_CppCharacter>(OtherActor);
			if (Player && IsValid(Player->BackPackComponent))
			{
				Player->FocusedItem = this;
			}
		}
	}
}

void AItemBase::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag("Player"))
	{
		ABackPack_CppCharacter* Player = Cast<ABackPack_CppCharacter>(OtherActor);
		if (Player && Player->FocusedItem == this)
		{
			Player->FocusedItem = nullptr; // 离开时清除焦点
		}
	}
}





