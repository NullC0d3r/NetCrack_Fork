#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldSecurityLaw_TheftItem

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_WorldSecurityLaw_TheftItem.BP_WorldSecurityLaw_TheftItem_C.Condition
// 0x0078 (0x0078 - 0x0000)
struct BP_WorldSecurityLaw_TheftItem_C_Condition final
{
public:
	struct FPalItemOperationInfo_Move             EventInfo;                                         // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue; // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1; // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurityLaw_TheftItem_C_Condition) == 0x000008, "Wrong alignment on BP_WorldSecurityLaw_TheftItem_C_Condition");
static_assert(sizeof(BP_WorldSecurityLaw_TheftItem_C_Condition) == 0x000078, "Wrong size on BP_WorldSecurityLaw_TheftItem_C_Condition");
static_assert(offsetof(BP_WorldSecurityLaw_TheftItem_C_Condition, EventInfo) == 0x000000, "Member 'BP_WorldSecurityLaw_TheftItem_C_Condition::EventInfo' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_TheftItem_C_Condition, ReturnValue) == 0x000070, "Member 'BP_WorldSecurityLaw_TheftItem_C_Condition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_TheftItem_C_Condition, CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue) == 0x000071, "Member 'BP_WorldSecurityLaw_TheftItem_C_Condition::CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_TheftItem_C_Condition, CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1) == 0x000072, "Member 'BP_WorldSecurityLaw_TheftItem_C_Condition::CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_TheftItem_C_Condition, CallFunc_Not_PreBool_ReturnValue) == 0x000073, "Member 'BP_WorldSecurityLaw_TheftItem_C_Condition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
