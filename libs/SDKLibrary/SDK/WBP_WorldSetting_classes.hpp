#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WorldSetting

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WorldSetting.WBP_WorldSetting_C
// 0x0050 (0x05E8 - 0x0598)
class UWBP_WorldSetting_C final : public UPalUIWorldSettingBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_69;                                          // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonWaiting_C*                   WBP_CommonWaiting;                                 // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*            WBP_Title_WorldMenu_Head;                          // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSettings_C*             WBP_Title_WorldSettings;                           // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    WaitingSaveMsgID;                                  // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          Is_New_World;                                      // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1[0x7];                                      // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_HUDDispatchParameter_WorldNameInput_C* WorldNameInputDispatchParameter;                   // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_RandomizerSeedInput_C* RandomizerSeedInputDispatchParameter;              // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void StartNewGame(const struct FPalOptionWorldSettings& Option);
	void OpenWorldNameInputWindow();
	void OpenStartGameCheckDialog();
	void OpenRandomizerSeedInputWindow();
	void OpenCheckSaveSettingDialog();
	void OnSetup();
	void OnFilteredWorldName(const class FString& NewWorldName);
	void OnCompletedSaveSetting(bool IsSuccess);
	void OnClosedWorldNameInputWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnClosedStartGameDialog(bool bResult);
	void OnClosedSaveSettingDialog(bool bResult);
	void OnClosedRandomizerSeedInputWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnCancelAction();
	void ExecuteUbergraph_WBP_WorldSetting(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_3_OnClickedRandomizerSeedInputButton__DelegateSignature();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorldSetting_C">();
	}
	static class UWBP_WorldSetting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldSetting_C>();
	}
};
static_assert(alignof(UWBP_WorldSetting_C) == 0x000008, "Wrong alignment on UWBP_WorldSetting_C");
static_assert(sizeof(UWBP_WorldSetting_C) == 0x0005E8, "Wrong size on UWBP_WorldSetting_C");
static_assert(offsetof(UWBP_WorldSetting_C, UberGraphFrame) == 0x000598, "Member 'UWBP_WorldSetting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, Image_69) == 0x0005A0, "Member 'UWBP_WorldSetting_C::Image_69' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, WBP_CommonWaiting) == 0x0005A8, "Member 'UWBP_WorldSetting_C::WBP_CommonWaiting' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, WBP_Title_WorldMenu_Head) == 0x0005B0, "Member 'UWBP_WorldSetting_C::WBP_Title_WorldMenu_Head' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, WBP_Title_WorldSettings) == 0x0005B8, "Member 'UWBP_WorldSetting_C::WBP_Title_WorldSettings' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, WaitingSaveMsgID) == 0x0005C0, "Member 'UWBP_WorldSetting_C::WaitingSaveMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, Is_New_World) == 0x0005D0, "Member 'UWBP_WorldSetting_C::Is_New_World' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, WorldNameInputDispatchParameter) == 0x0005D8, "Member 'UWBP_WorldSetting_C::WorldNameInputDispatchParameter' has a wrong offset!");
static_assert(offsetof(UWBP_WorldSetting_C, RandomizerSeedInputDispatchParameter) == 0x0005E0, "Member 'UWBP_WorldSetting_C::RandomizerSeedInputDispatchParameter' has a wrong offset!");

}

