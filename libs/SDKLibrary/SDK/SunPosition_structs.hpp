#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SunPosition

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct SunPosition.SunPositionData
// 0x0028 (0x0028 - 0x0000)
struct FSunPositionData final
{
public:
	float                                         Elevation;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CorrectedElevation;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Azimuth;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              SunriseTime;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              SunsetTime;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              SolarNoon;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSunPositionData) == 0x000008, "Wrong alignment on FSunPositionData");
static_assert(sizeof(FSunPositionData) == 0x000028, "Wrong size on FSunPositionData");
static_assert(offsetof(FSunPositionData, Elevation) == 0x000000, "Member 'FSunPositionData::Elevation' has a wrong offset!");
static_assert(offsetof(FSunPositionData, CorrectedElevation) == 0x000004, "Member 'FSunPositionData::CorrectedElevation' has a wrong offset!");
static_assert(offsetof(FSunPositionData, Azimuth) == 0x000008, "Member 'FSunPositionData::Azimuth' has a wrong offset!");
static_assert(offsetof(FSunPositionData, SunriseTime) == 0x000010, "Member 'FSunPositionData::SunriseTime' has a wrong offset!");
static_assert(offsetof(FSunPositionData, SunsetTime) == 0x000018, "Member 'FSunPositionData::SunsetTime' has a wrong offset!");
static_assert(offsetof(FSunPositionData, SolarNoon) == 0x000020, "Member 'FSunPositionData::SolarNoon' has a wrong offset!");

}
