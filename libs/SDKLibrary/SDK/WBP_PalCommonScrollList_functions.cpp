#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonScrollList

#include "Basic.hpp"

#include "WBP_PalCommonScrollList_classes.hpp"
#include "WBP_PalCommonScrollList_parameters.hpp"


namespace SDK
{

// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::AddScrollOffset(double Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "AddScrollOffset");

	Params::WBP_PalCommonScrollList_C_AddScrollOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::AddWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "AddWidget");

	Params::WBP_PalCommonScrollList_C_AddWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");

	Params::WBP_PalCommonScrollList_C_BndEvt__WBP_PalCommonScrollList_ScrollBox_0_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.ClearAllChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalCommonScrollList_C::ClearAllChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "ClearAllChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonScrollList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCommonScrollList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.ExecuteUbergraph_WBP_PalCommonScrollList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::ExecuteUbergraph_WBP_PalCommonScrollList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "ExecuteUbergraph_WBP_PalCommonScrollList");

	Params::WBP_PalCommonScrollList_C_ExecuteUbergraph_WBP_PalCommonScrollList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetAllChildrenNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetAllChildrenNum(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetAllChildrenNum");

	Params::WBP_PalCommonScrollList_C_GetAllChildrenNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetIndexFromWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetIndexFromWidget(class UWidget* Widget, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetIndexFromWidget");

	Params::WBP_PalCommonScrollList_C_GetIndexFromWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.GetScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*                       ScrollBox                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::GetScrollBox(class UScrollBox** ScrollBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "GetScrollBox");

	Params::WBP_PalCommonScrollList_C_GetScrollBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollBox != nullptr)
		*ScrollBox = Parms.ScrollBox;
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "OnInputMethodChanged");

	Params::WBP_PalCommonScrollList_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCommonScrollList.WBP_PalCommonScrollList_C.UpdateArrowVisibilityAndAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonScrollList_C::UpdateArrowVisibilityAndAnimation(double CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCommonScrollList_C", "UpdateArrowVisibilityAndAnimation");

	Params::WBP_PalCommonScrollList_C_UpdateArrowVisibilityAndAnimation Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}

}
