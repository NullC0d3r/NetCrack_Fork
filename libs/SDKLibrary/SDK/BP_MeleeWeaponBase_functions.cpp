#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeleeWeaponBase

#include "Basic.hpp"

#include "BP_MeleeWeaponBase_classes.hpp"
#include "BP_MeleeWeaponBase_parameters.hpp"


namespace SDK
{

// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_MeleeWeaponBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "GetEquipSocketName");

	Params::BP_MeleeWeaponBase_C_GetEquipSocketName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_MeleeWeaponBase_C::GetLeftHandTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "GetLeftHandTransform");

	Params::BP_MeleeWeaponBase_C_GetLeftHandTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::IsUseLeftHandAttach() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "IsUseLeftHandAttach");

	Params::BP_MeleeWeaponBase_C_IsUseLeftHandAttach Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekLeftHandOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::SeekLeftHandOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "SeekLeftHandOpen");

	Params::BP_MeleeWeaponBase_C_SeekLeftHandOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekRightHandOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::SeekRightHandOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "SeekRightHandOpen");

	Params::BP_MeleeWeaponBase_C_SeekRightHandOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
