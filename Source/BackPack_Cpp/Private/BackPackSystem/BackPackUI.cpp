// Fill out your copyright notice in the Description page of Project Settings.


#include "BackPackSystem/BackPackUI.h"
#include "BackPackSystem/BackPackSlot.h"
#include "BackPack_Cpp/BackPack_CppCharacter.h"
#include "Gameplay/MyBaseGameInstance.h"


void UBackPackUI::NativeConstruct()
{
	Super::NativeConstruct();
	UMyBaseGameInstance* MyGameInstance = Cast<UMyBaseGameInstance>(GetWorld()->GetGameInstance());
    BackPackTransfer = MyGameInstance->BackPack_Array;
	RefreshBackPack();

	CloseButton->OnClicked.AddDynamic(this,&UBackPackUI::OnCloseButtonClick);
}

void UBackPackUI::RefreshBackPack()
{
	/* UI每次构造时调用函数刷新背包内所有的格子 */
	if (!IsValid(GetWorld())) return;
	APlayerController*OwningPlayer = GetWorld()->GetFirstPlayerController();
	TSubclassOf<UBackPackSlot> WidgetClass = LoadClass<UBackPackSlot>(nullptr, TEXT("/Game/BackPackSystem/UMG/UMG_BackPackSlot.UMG_BackPackSlot_C"));

	BackPackPanel->ClearChildren();
	for (int32 i = 0 ; i < SlotCount ; i++)
	{
		BackPackSlot = CreateWidget<UBackPackSlot>(OwningPlayer,WidgetClass);
		if (BackPackTransfer.IsValidIndex(i))
		{
			// 这个位置存有东西,需要将Image，Index，Number这些参数传递个Slot去初始化
			BackPackSlot->Image = BackPackTransfer[i].Icon;  // 设置图标
			BackPackSlot->Index = i;  // 设置格子的Index
			BackPackSlot->Number = BackPackTransfer[i].Count;  // 设置数量
			BackPackSlot->SetSlot();
		}
		BackPackPanel->AddChildToUniformGrid(BackPackSlot,(i / 4),(i % 4));
	}
}

void UBackPackUI::OnCloseButtonClick()
{
	ABackPack_CppCharacter* Player = Cast<ABackPack_CppCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!Player) return;
	Player->BackPackUIController();
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Close"));
}

// FEventReply UBackPackUI::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
// {
// 	// 检查按下的键
// 	if (InKeyEvent.GetKey() == EKeys::Tab)
// 	{
// 		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Tab"));
// 		OnCloseButtonClick();
// 		return FEventReply(true); // 阻止事件继续传递
// 	}
//
// 	// 如果不处理，调用父类默认行为
// 	return Super::OnKeyDown(MyGeometry, InKeyEvent);
// }
