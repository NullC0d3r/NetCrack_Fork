#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_SliderBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_CharaCre_SliderBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Slider;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SliderNum;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    MsgId;                                             // 0x0298(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	void ExecuteUbergraph_WBP_CharaCre_SliderBase(int32 EntryPoint);
	void OnInitialized();
	void SetValue(int32 NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_SliderBase_C">();
	}
	static class UWBP_CharaCre_SliderBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_SliderBase_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_SliderBase_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_SliderBase_C");
static_assert(sizeof(UWBP_CharaCre_SliderBase_C) == 0x0002A8, "Wrong size on UWBP_CharaCre_SliderBase_C");
static_assert(offsetof(UWBP_CharaCre_SliderBase_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_SliderBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_SliderBase_C, Base) == 0x000280, "Member 'UWBP_CharaCre_SliderBase_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_SliderBase_C, Text_Slider) == 0x000288, "Member 'UWBP_CharaCre_SliderBase_C::Text_Slider' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_SliderBase_C, Text_SliderNum) == 0x000290, "Member 'UWBP_CharaCre_SliderBase_C::Text_SliderNum' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_SliderBase_C, MsgId) == 0x000298, "Member 'UWBP_CharaCre_SliderBase_C::MsgId' has a wrong offset!");

}
