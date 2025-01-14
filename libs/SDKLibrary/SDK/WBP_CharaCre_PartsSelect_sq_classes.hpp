#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_PartsSelect_sq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_PartsSelect_sq.WBP_CharaCre_PartsSelect_sq_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_CharaCre_PartsSelect_sq_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Select;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MeshSelect_Square;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   Bind_Name;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Normal();
	void AnmEvent_Push();
	void AnmEvent_Unselect();
	void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_CharaCre_PartsSelect_sq(int32 EntryPoint);
	void GetBindedPresetName(class FName* PresetName);
	void OnClicked__DelegateSignature(class UWBP_CharaCre_PartsSelect_sq_C* Widget);
	void Setup(class FName BindName, TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetupByMeshPresetData(const struct FPalCharacterCreationMeshPresetDataRow& MeshData, class FName BindName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_PartsSelect_sq_C">();
	}
	static class UWBP_CharaCre_PartsSelect_sq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_PartsSelect_sq_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_PartsSelect_sq_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_PartsSelect_sq_C");
static_assert(sizeof(UWBP_CharaCre_PartsSelect_sq_C) == 0x0002D0, "Wrong size on UWBP_CharaCre_PartsSelect_sq_C");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_PartsSelect_sq_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Anm_Push) == 0x000288, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Anm_Focus) == 0x000290, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Anm_Normal) == 0x000298, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Canvas_Select) == 0x0002A0, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Canvas_Select' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, MeshSelect_Square) == 0x0002A8, "Member 'UWBP_CharaCre_PartsSelect_sq_C::MeshSelect_Square' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, WBP_PalInvisibleButton) == 0x0002B0, "Member 'UWBP_CharaCre_PartsSelect_sq_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, OnClicked) == 0x0002B8, "Member 'UWBP_CharaCre_PartsSelect_sq_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_PartsSelect_sq_C, Bind_Name) == 0x0002C8, "Member 'UWBP_CharaCre_PartsSelect_sq_C::Bind_Name' has a wrong offset!");

}

