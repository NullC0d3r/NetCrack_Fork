#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Leave_BackStep

#include "Basic.hpp"

#include "BP_AIAction_Leave_BackStep_classes.hpp"
#include "BP_AIAction_Leave_BackStep_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ActionAbort");

	Params::BP_AIAction_Leave_BackStep_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ActionFinished");

	Params::BP_AIAction_Leave_BackStep_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ActionPause");

	Params::BP_AIAction_Leave_BackStep_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ActionStart");

	Params::BP_AIAction_Leave_BackStep_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ActionTick");

	Params::BP_AIAction_Leave_BackStep_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.AddGoalArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Right                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DistanceRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          BackVector                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RightVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::AddGoalArray(double Right, double DistanceRate, const struct FVector& BackVector, const struct FVector& RightVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "AddGoalArray");

	Params::BP_AIAction_Leave_BackStep_C_AddGoalArray Parms{};

	Parms.Right = Right;
	Parms.DistanceRate = DistanceRate;
	Parms.BackVector = std::move(BackVector);
	Parms.RightVector = std::move(RightVector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.CheckReachable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoalPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::CheckReachable(const struct FVector& GoalPos, bool* Success, struct FVector* HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "CheckReachable");

	Params::BP_AIAction_Leave_BackStep_C_CheckReachable Parms{};

	Parms.GoalPos = std::move(GoalPos);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.ExecuteUbergraph_BP_AIAction_Leave_BackStep
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::ExecuteUbergraph_BP_AIAction_Leave_BackStep(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "ExecuteUbergraph_BP_AIAction_Leave_BackStep");

	Params::BP_AIAction_Leave_BackStep_C_ExecuteUbergraph_BP_AIAction_Leave_BackStep Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.FindGoalLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          GoalPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::FindGoalLocation(struct FVector* GoalPos, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "FindGoalLocation");

	Params::BP_AIAction_Leave_BackStep_C_FindGoalLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GoalPos != nullptr)
		*GoalPos = std::move(Parms.GoalPos);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C.OnChildActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawnAction*                      Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_BackStep_C::OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_BackStep_C", "OnChildActionFinished");

	Params::BP_AIAction_Leave_BackStep_C_OnChildActionFinished Parms{};

	Parms.Action = Action;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}

}
