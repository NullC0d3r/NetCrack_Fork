#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_MenuButton

#include "Basic.hpp"

#include "E_PalUITitleMenuButtonType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Title_MenuButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_MenuButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Title_MenuButton_C_PreConstruct");
static_assert(sizeof(WBP_Title_MenuButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_Title_MenuButton_C_PreConstruct");
static_assert(offsetof(WBP_Title_MenuButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Title_MenuButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.GetMenuType
// 0x0001 (0x0001 - 0x0000)
struct WBP_Title_MenuButton_C_GetMenuType final
{
public:
	E_PalUITitleMenuButtonType                    BindedMenuType;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_MenuButton_C_GetMenuType) == 0x000001, "Wrong alignment on WBP_Title_MenuButton_C_GetMenuType");
static_assert(sizeof(WBP_Title_MenuButton_C_GetMenuType) == 0x000001, "Wrong size on WBP_Title_MenuButton_C_GetMenuType");
static_assert(offsetof(WBP_Title_MenuButton_C_GetMenuType, BindedMenuType) == 0x000000, "Member 'WBP_Title_MenuButton_C_GetMenuType::BindedMenuType' has a wrong offset!");

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.ExecuteUbergraph_WBP_Title_MenuButton
// 0x0090 (0x0090 - 0x0000)
struct WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value;                           // 0x0038(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0050(0x0018)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
};
static_assert(alignof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton) == 0x000008, "Wrong alignment on WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton");
static_assert(sizeof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton) == 0x000090, "Wrong size on WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, EntryPoint) == 0x000000, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, K2Node_ComponentBoundEvent_Button_2) == 0x000008, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, K2Node_ComponentBoundEvent_Button_1) == 0x000010, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000050, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000068, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'WBP_Title_MenuButton_C_ExecuteUbergraph_WBP_Title_MenuButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_MenuButton.WBP_Title_MenuButton_C.BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_MenuButton_C_BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

