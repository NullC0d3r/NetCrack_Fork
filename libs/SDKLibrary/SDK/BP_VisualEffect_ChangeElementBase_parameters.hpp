#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_ChangeElementBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_ChangeElementBase.BP_VisualEffect_ChangeElementBase_C.DeleteEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_VisualEffect_ChangeElementBase_C_DeleteEffect final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_ChangeElementBase_C_DeleteEffect) == 0x000001, "Wrong alignment on BP_VisualEffect_ChangeElementBase_C_DeleteEffect");
static_assert(sizeof(BP_VisualEffect_ChangeElementBase_C_DeleteEffect) == 0x000001, "Wrong size on BP_VisualEffect_ChangeElementBase_C_DeleteEffect");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_DeleteEffect, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_VisualEffect_ChangeElementBase_C_DeleteEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_ChangeElementBase.BP_VisualEffect_ChangeElementBase_C.ExecuteUbergraph_BP_VisualEffect_ChangeElementBase
// 0x0120 (0x0120 - 0x0000)
struct BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase) == 0x000008, "Wrong alignment on BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase");
static_assert(sizeof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase) == 0x000120, "Wrong size on BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, CallFunc_GetMainMesh_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, K2Node_Event_DeltaTime) == 0x000030, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000038, "Member 'BP_VisualEffect_ChangeElementBase_C_ExecuteUbergraph_BP_VisualEffect_ChangeElementBase::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_VisualEffect_ChangeElementBase.BP_VisualEffect_ChangeElementBase_C.SetLimLight
// 0x0018 (0x0018 - 0x0000)
struct BP_VisualEffect_ChangeElementBase_C_SetLimLight final
{
public:
	double                                        Intensity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_ChangeElementBase_C_SetLimLight) == 0x000008, "Wrong alignment on BP_VisualEffect_ChangeElementBase_C_SetLimLight");
static_assert(sizeof(BP_VisualEffect_ChangeElementBase_C_SetLimLight) == 0x000018, "Wrong size on BP_VisualEffect_ChangeElementBase_C_SetLimLight");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_SetLimLight, Intensity) == 0x000000, "Member 'BP_VisualEffect_ChangeElementBase_C_SetLimLight::Intensity' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_SetLimLight, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_ChangeElementBase_C_SetLimLight::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_SetLimLight, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000010, "Member 'BP_VisualEffect_ChangeElementBase_C_SetLimLight::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_ChangeElementBase.BP_VisualEffect_ChangeElementBase_C.SpawnhEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_VisualEffect_ChangeElementBase_C_SpawnhEffect final
{
public:
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_ChangeElementBase_C_SpawnhEffect) == 0x000008, "Wrong alignment on BP_VisualEffect_ChangeElementBase_C_SpawnhEffect");
static_assert(sizeof(BP_VisualEffect_ChangeElementBase_C_SpawnhEffect) == 0x000008, "Wrong size on BP_VisualEffect_ChangeElementBase_C_SpawnhEffect");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_SpawnhEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000000, "Member 'BP_VisualEffect_ChangeElementBase_C_SpawnhEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_ChangeElementBase.BP_VisualEffect_ChangeElementBase_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_ChangeElementBase_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_ChangeElementBase_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_ChangeElementBase_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_ChangeElementBase_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_ChangeElementBase_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_ChangeElementBase_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_ChangeElementBase_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}
