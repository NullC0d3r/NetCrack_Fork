#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalKeyGuideIcon

#include "Basic.hpp"

#include "WBP_PalKeyGuideIcon_classes.hpp"
#include "WBP_PalKeyGuideIcon_parameters.hpp"


namespace SDK
{

// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::WBP_PalKeyGuideIcon_C_BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalKeyGuideIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.ExecuteUbergraph_WBP_PalKeyGuideIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "ExecuteUbergraph_WBP_PalKeyGuideIcon");

	Params::WBP_PalKeyGuideIcon_C_ExecuteUbergraph_WBP_PalKeyGuideIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalKeyGuideIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalKeyGuideIcon_C::OverrideImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OverrideImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::OverrideInputType(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OverrideInputType");

	Params::WBP_PalKeyGuideIcon_C_OverrideInputType Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetInputAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetInputAction");

	Params::WBP_PalKeyGuideIcon_C_SetInputAction Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetOverrideSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetOverrideSize");

	Params::WBP_PalKeyGuideIcon_C_SetOverrideSize Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.UpdateOverrideImage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKeyConfigSettings            PrevSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalKeyConfigSettings            NewSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalKeyGuideIcon_C::UpdateOverrideImage(const struct FPalKeyConfigSettings& PrevSettings, const struct FPalKeyConfigSettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "UpdateOverrideImage");

	Params::WBP_PalKeyGuideIcon_C_UpdateOverrideImage Parms{};

	Parms.PrevSettings = std::move(PrevSettings);
	Parms.NewSettings = std::move(NewSettings);

	UObject::ProcessEvent(Func, &Parms);
}

}

