#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Pal_WorkIconText

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_MainMenu_Pal_WorkIconText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_WorkIcon_C*           WBP_MainMenu_Pal_WorkIcon;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_ForceOff();
	void AnmEvent_OffToOn();
	void ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText(int32 EntryPoint);
	void SetSuitability(EPalWorkSuitability Suitability, int32 Rank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_WorkIconText_C">();
	}
	static class UWBP_MainMenu_Pal_WorkIconText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_WorkIconText_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_WorkIconText_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_WorkIconText_C");
static_assert(sizeof(UWBP_MainMenu_Pal_WorkIconText_C) == 0x0002A8, "Wrong size on UWBP_MainMenu_Pal_WorkIconText_C");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, BP_PalTextBlock_C) == 0x000280, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, CanvasPanel_2) == 0x000288, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, HorizontalBox_0) == 0x000290, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, Text_Title) == 0x000298, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIconText_C, WBP_MainMenu_Pal_WorkIcon) == 0x0002A0, "Member 'UWBP_MainMenu_Pal_WorkIconText_C::WBP_MainMenu_Pal_WorkIcon' has a wrong offset!");

}
