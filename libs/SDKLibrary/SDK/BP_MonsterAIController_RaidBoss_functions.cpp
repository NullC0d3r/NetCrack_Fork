#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_RaidBoss

#include "Basic.hpp"

#include "BP_MonsterAIController_RaidBoss_classes.hpp"
#include "BP_MonsterAIController_RaidBoss_parameters.hpp"


namespace SDK
{

// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.DeleteDeadBody
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_RaidBoss_C::DeleteDeadBody(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "DeleteDeadBody");

	Params::BP_MonsterAIController_RaidBoss_C_DeleteDeadBody Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.ExecuteUbergraph_BP_MonsterAIController_RaidBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::ExecuteUbergraph_BP_MonsterAIController_RaidBoss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "ExecuteUbergraph_BP_MonsterAIController_RaidBoss");

	Params::BP_MonsterAIController_RaidBoss_C_ExecuteUbergraph_BP_MonsterAIController_RaidBoss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.Force Battle Startto Target For Raid Boss
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*>      AllPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MonsterAIController_RaidBoss_C::Force_Battle_Startto_Target_For_Raid_Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "Force Battle Startto Target For Raid Boss");

	Params::BP_MonsterAIController_RaidBoss_C_Force_Battle_Startto_Target_For_Raid_Boss Parms{};

	Parms.Player = Player;
	Parms.AllPlayer = std::move(AllPlayer);

	UObject::ProcessEvent(Func, &Parms);

	AllPlayer = std::move(Parms.AllPlayer);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     LeaderPalBrackboard                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "GetLeaderBB");

	Params::BP_MonsterAIController_RaidBoss_C_GetLeaderBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBrackboard                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "GetMyBB");

	Params::BP_MonsterAIController_RaidBoss_C_GetMyBB Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.GetTargetCampID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                            CampID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::GetTargetCampID(struct FGuid* CampID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "GetTargetCampID");

	Params::BP_MonsterAIController_RaidBoss_C_GetTargetCampID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CampID != nullptr)
		*CampID = std::move(Parms.CampID);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "ReceivePossess");

	Params::BP_MonsterAIController_RaidBoss_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.SetTargetCampID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::SetTargetCampID(const struct FGuid& CampID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "SetTargetCampID");

	Params::BP_MonsterAIController_RaidBoss_C_SetTargetCampID Parms{};

	Parms.CampID = std::move(CampID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.�������
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::________(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "�������");

	Params::BP_MonsterAIController_RaidBoss_C_________ Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MonsterAIController_RaidBoss.BP_MonsterAIController_RaidBoss_C.�������_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_RaidBoss_C::_________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterAIController_RaidBoss_C", "�������_1");

	Params::BP_MonsterAIController_RaidBoss_C__________1 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

