#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonButtonBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonButtonBase.WBP_PalCommonButtonBase_C
// 0x0030 (0x1520 - 0x14F0)
class UWBP_PalCommonButtonBase_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          HideFocusCursor;                                   // 0x14F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14F9[0x7];                                     // 0x14F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          HoverAKAudioEvent;                                 // 0x1500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UnhoverAKAudioEvent;                               // 0x1508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          ClickAKAudioEvent;                                 // 0x1510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Destruct();
	void ExecuteUbergraph_WBP_PalCommonButtonBase(int32 EntryPoint);
	void PlayAkSound(class UAkAudioEvent* AudioEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonButtonBase_C">();
	}
	static class UWBP_PalCommonButtonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonButtonBase_C>();
	}
};
static_assert(alignof(UWBP_PalCommonButtonBase_C) == 0x000010, "Wrong alignment on UWBP_PalCommonButtonBase_C");
static_assert(sizeof(UWBP_PalCommonButtonBase_C) == 0x001520, "Wrong size on UWBP_PalCommonButtonBase_C");
static_assert(offsetof(UWBP_PalCommonButtonBase_C, UberGraphFrame) == 0x0014F0, "Member 'UWBP_PalCommonButtonBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonButtonBase_C, HideFocusCursor) == 0x0014F8, "Member 'UWBP_PalCommonButtonBase_C::HideFocusCursor' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonButtonBase_C, HoverAKAudioEvent) == 0x001500, "Member 'UWBP_PalCommonButtonBase_C::HoverAKAudioEvent' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonButtonBase_C, UnhoverAKAudioEvent) == 0x001508, "Member 'UWBP_PalCommonButtonBase_C::UnhoverAKAudioEvent' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonButtonBase_C, ClickAKAudioEvent) == 0x001510, "Member 'UWBP_PalCommonButtonBase_C::ClickAKAudioEvent' has a wrong offset!");

}
