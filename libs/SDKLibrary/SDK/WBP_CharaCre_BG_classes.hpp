#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_BG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_BG.WBP_CharaCre_BG_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_CharaCre_BG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Light_OnToOff;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_132;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_181;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_591;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_FloorIn();
	void AnmEvent_FloorOut();
	void ExecuteUbergraph_WBP_CharaCre_BG(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_BG_C">();
	}
	static class UWBP_CharaCre_BG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_BG_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_BG_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_BG_C");
static_assert(sizeof(UWBP_CharaCre_BG_C) == 0x0002B8, "Wrong size on UWBP_CharaCre_BG_C");
static_assert(offsetof(UWBP_CharaCre_BG_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_BG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Anm_Light_OnToOff) == 0x000280, "Member 'UWBP_CharaCre_BG_C::Anm_Light_OnToOff' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image) == 0x000288, "Member 'UWBP_CharaCre_BG_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image_1) == 0x000290, "Member 'UWBP_CharaCre_BG_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image_2) == 0x000298, "Member 'UWBP_CharaCre_BG_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image_132) == 0x0002A0, "Member 'UWBP_CharaCre_BG_C::Image_132' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image_181) == 0x0002A8, "Member 'UWBP_CharaCre_BG_C::Image_181' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BG_C, Image_591) == 0x0002B0, "Member 'UWBP_CharaCre_BG_C::Image_591' has a wrong offset!");

}

