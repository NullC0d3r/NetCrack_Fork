#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISightResponsePreset_Citizen

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C
// 0x0008 (0x00E0 - 0x00D8)
class UBP_AISightResponsePreset_Citizen_C final : public UPalAISightResponsePreset
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BlueprintDelegateSetup();
	void ExecuteUbergraph_BP_AISightResponsePreset_Citizen(int32 EntryPoint);
	void _________0(class APalCharacter* SelfCharacter, class APalCharacter* FoundCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AISightResponsePreset_Citizen_C">();
	}
	static class UBP_AISightResponsePreset_Citizen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AISightResponsePreset_Citizen_C>();
	}
};
static_assert(alignof(UBP_AISightResponsePreset_Citizen_C) == 0x000008, "Wrong alignment on UBP_AISightResponsePreset_Citizen_C");
static_assert(sizeof(UBP_AISightResponsePreset_Citizen_C) == 0x0000E0, "Wrong size on UBP_AISightResponsePreset_Citizen_C");
static_assert(offsetof(UBP_AISightResponsePreset_Citizen_C, UberGraphFrame) == 0x0000D8, "Member 'UBP_AISightResponsePreset_Citizen_C::UberGraphFrame' has a wrong offset!");

}

