#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRandomIncidentNPCSpawner

#include "Basic.hpp"

#include "BP_PalRandomIncidentNPCSpawner_classes.hpp"
#include "BP_PalRandomIncidentNPCSpawner_parameters.hpp"


namespace SDK
{

// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Despawn Characters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentNPCSpawner_C::Despawn_Characters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Despawn Characters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.DespawnCharacters
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentNPCSpawner_C::DespawnCharacters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "DespawnCharacters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner");

	Params::BP_PalRandomIncidentNPCSpawner_C_ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.FindCharacterByName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class APalCharacter* ABP_PalRandomIncidentNPCSpawner_C::FindCharacterByName(const class FName& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "FindCharacterByName");

	Params::BP_PalRandomIncidentNPCSpawner_C_FindCharacterByName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.FindIndividualHandle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "FindIndividualHandle");

	Params::BP_PalRandomIncidentNPCSpawner_C_FindIndividualHandle Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Get Character
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class APalCharacter*                    Character                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Get_Character(const struct FPalInstanceID& ID, class APalCharacter** Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Get Character");

	Params::BP_PalRandomIncidentNPCSpawner_C_Get_Character Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Get Path Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                             PathName                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Get_Path_Name(const struct FPalInstanceID& ID, class FName* PathName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Get Path Name");

	Params::BP_PalRandomIncidentNPCSpawner_C_Get_Path_Name Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (PathName != nullptr)
		*PathName = Parms.PathName;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetDefaultAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClass*                           DefaultAction                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           DefaultAIAction                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetDefaultAction(const struct FPalInstanceID& ID, class UClass** DefaultAction, class UClass** DefaultAIAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetDefaultAction");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetDefaultAction Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultAction != nullptr)
		*DefaultAction = Parms.DefaultAction;

	if (DefaultAIAction != nullptr)
		*DefaultAIAction = Parms.DefaultAIAction;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetGroupNo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*    IndividualHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   GroupNo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetGroupNo(class UPalIndividualCharacterHandle* IndividualHandle, int32* GroupNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetGroupNo");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetGroupNo Parms{};

	Parms.IndividualHandle = IndividualHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupNo != nullptr)
		*GroupNo = Parms.GroupNo;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetHandleByCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetHandleByCharacter(class APalCharacter* Character, class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetHandleByCharacter");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetHandleByCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetSpawnedCharacters
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   SpawnedCharacters                                      (Parm, OutParm)

void ABP_PalRandomIncidentNPCSpawner_C::GetSpawnedCharacters(TArray<class AActor*>* SpawnedCharacters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetSpawnedCharacters");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetSpawnedCharacters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedCharacters != nullptr)
		*SpawnedCharacters = std::move(Parms.SpawnedCharacters);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetSpawnedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_SpawnedLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetSpawnedLocation(class UPalIndividualCharacterHandle* Handle, bool* Found, struct FVector* Param_SpawnedLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetSpawnedLocation");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetSpawnedLocation Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Param_SpawnedLocation != nullptr)
		*Param_SpawnedLocation = std::move(Parms.Param_SpawnedLocation);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetWalkPath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             PathName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray             WalkPathList                                           (Parm, OutParm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetWalkPath(class FName PathName, struct FF_NPC_PathWalkArray* WalkPathList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetWalkPath");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetWalkPath Parms{};

	Parms.PathName = PathName;

	UObject::ProcessEvent(Func, &Parms);

	if (WalkPathList != nullptr)
		*WalkPathList = std::move(Parms.WalkPathList);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.GetWalkPathDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::GetWalkPathDelegate__DelegateSignature(class FName NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "GetWalkPathDelegate__DelegateSignature");

	Params::BP_PalRandomIncidentNPCSpawner_C_GetWalkPathDelegate__DelegateSignature Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.IsSpawnedCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PalRandomIncidentNPCSpawner_C::IsSpawnedCharacter(const class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "IsSpawnedCharacter");

	Params::BP_PalRandomIncidentNPCSpawner_C_IsSpawnedCharacter Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.IsSquad
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Param_IsSquad                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::IsSquad(const struct FPalInstanceID& ID, bool* Param_IsSquad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "IsSquad");

	Params::BP_PalRandomIncidentNPCSpawner_C_IsSquad Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsSquad != nullptr)
		*Param_IsSquad = Parms.Param_IsSquad;
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.On Character Spawned 
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::On_Character_Spawned_(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "On Character Spawned ");

	Params::BP_PalRandomIncidentNPCSpawner_C_On_Character_Spawned_ Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.OnCharacterDespawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::OnCharacterDespawned(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "OnCharacterDespawned");

	Params::BP_PalRandomIncidentNPCSpawner_C_OnCharacterDespawned Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.OnCharacterDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::OnCharacterDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "OnCharacterDestroyed");

	Params::BP_PalRandomIncidentNPCSpawner_C_OnCharacterDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.OnOtomoSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      HolderController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    OtomoPal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "OnOtomoSpawned");

	Params::BP_PalRandomIncidentNPCSpawner_C_OnOtomoSpawned Parms{};

	Parms.HolderController = HolderController;
	Parms.OtomoPal = OtomoPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "ReceiveEndPlay");

	Params::BP_PalRandomIncidentNPCSpawner_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.RemoveHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::RemoveHandle(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "RemoveHandle");

	Params::BP_PalRandomIncidentNPCSpawner_C_RemoveHandle Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Setup Npc Controller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPCAIController_C*            NPCController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    SpawnedChara                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Setup_Npc_Controller(class ABP_NPCAIController_C* NPCController, class APalCharacter* SpawnedChara, const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Setup Npc Controller");

	Params::BP_PalRandomIncidentNPCSpawner_C_Setup_Npc_Controller Parms{};

	Parms.NPCController = NPCController;
	Parms.SpawnedChara = SpawnedChara;
	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Setup Spawned Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Setup_Spawned_Character(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Setup Spawned Character");

	Params::BP_PalRandomIncidentNPCSpawner_C_Setup_Spawned_Character Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SetupMonsterController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MonsterAIController_Wild_C*   Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    SpawnedChara                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SetupMonsterController(class ABP_MonsterAIController_Wild_C* Controller, class APalCharacter* SpawnedChara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SetupMonsterController");

	Params::BP_PalRandomIncidentNPCSpawner_C_SetupMonsterController Parms{};

	Parms.Controller = Controller;
	Parms.SpawnedChara = SpawnedChara;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SetWalkPathList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FF_NPC_PathWalkArray>PathList                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PalRandomIncidentNPCSpawner_C::SetWalkPathList(const TMap<class FName, struct FF_NPC_PathWalkArray>& PathList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SetWalkPathList");

	Params::BP_PalRandomIncidentNPCSpawner_C_SetWalkPathList Parms{};

	Parms.PathList = std::move(PathList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Spawn Monster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataSpawnData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   SpawnPointIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Spawn_Monster(class FName RowName, const struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Spawn Monster");

	Params::BP_PalRandomIncidentNPCSpawner_C_Spawn_Monster Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = std::move(SpawnData);
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.Spawn NPC
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCData   SpawnData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   SpawnPointIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::Spawn_NPC(class FName RowName, const struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "Spawn NPC");

	Params::BP_PalRandomIncidentNPCSpawner_C_Spawn_NPC Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = std::move(SpawnData);
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             UniqueName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OtomoName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             PathName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RotZ                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_SpawnedLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnCharacter(class FName RowName, class FName CharacterID, class FName UniqueName, class FName OtomoName, int32 Level, class UClass* AIController, class FName PathName, const struct FVector& Location, double Radius, double RotZ, int32 SpawnPointIndex, int32 SpawnPointCount, class UPalIndividualCharacterHandle** Handle, struct FVector* Param_SpawnedLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnCharacter");

	Params::BP_PalRandomIncidentNPCSpawner_C_SpawnCharacter Parms{};

	Parms.RowName = RowName;
	Parms.CharacterID = CharacterID;
	Parms.UniqueName = UniqueName;
	Parms.OtomoName = OtomoName;
	Parms.Level = Level;
	Parms.AIController = AIController;
	Parms.PathName = PathName;
	Parms.Location = std::move(Location);
	Parms.Radius = Radius;
	Parms.RotZ = RotZ;
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;

	if (Param_SpawnedLocation != nullptr)
		*Param_SpawnedLocation = std::move(Parms.Param_SpawnedLocation);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnMonster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataSpawnData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   SpawnPointIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnMonster(const class FName& RowName, const struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnMonster");

	Params::BP_PalRandomIncidentNPCSpawner_C_SpawnMonster Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = std::move(SpawnData);
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.SpawnNPC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCData   SpawnData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   SpawnPointIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnPointCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::SpawnNPC(const class FName& RowName, const struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "SpawnNPC");

	Params::BP_PalRandomIncidentNPCSpawner_C_SpawnNPC Parms{};

	Parms.RowName = RowName;
	Parms.SpawnData = std::move(SpawnData);
	Parms.SpawnPointIndex = SpawnPointIndex;
	Parms.SpawnPointCount = SpawnPointCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentNPCSpawner_C::_________0(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentNPCSpawner_C", "�������_0");

	Params::BP_PalRandomIncidentNPCSpawner_C__________0 Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}
