// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapTile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapTile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapTile();
GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapTile_NoRegister();
GRIDSYSTEM_API UEnum* Z_Construct_UEnum_GridSystem_EBiomeType();
UPackage* Z_Construct_UPackage__Script_GridSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBiomeType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBiomeType;
static UEnum* EBiomeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBiomeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBiomeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridSystem_EBiomeType, (UObject*)Z_Construct_UPackage__Script_GridSystem(), TEXT("EBiomeType"));
	}
	return Z_Registration_Info_UEnum_EBiomeType.OuterSingleton;
}
template<> GRIDSYSTEM_API UEnum* StaticEnum<EBiomeType>()
{
	return EBiomeType_StaticEnum();
}
struct Z_Construct_UEnum_GridSystem_EBiomeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Desert.Name", "EBiomeType::Desert" },
		{ "Forest.Name", "EBiomeType::Forest" },
		{ "Grassland.Name", "EBiomeType::Grassland" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
		{ "Mountain.Name", "EBiomeType::Mountain" },
		{ "Water.Name", "EBiomeType::Water" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBiomeType::Grassland", (int64)EBiomeType::Grassland },
		{ "EBiomeType::Desert", (int64)EBiomeType::Desert },
		{ "EBiomeType::Forest", (int64)EBiomeType::Forest },
		{ "EBiomeType::Mountain", (int64)EBiomeType::Mountain },
		{ "EBiomeType::Water", (int64)EBiomeType::Water },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridSystem_EBiomeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GridSystem,
	nullptr,
	"EBiomeType",
	"EBiomeType",
	Z_Construct_UEnum_GridSystem_EBiomeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GridSystem_EBiomeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GridSystem_EBiomeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GridSystem_EBiomeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GridSystem_EBiomeType()
{
	if (!Z_Registration_Info_UEnum_EBiomeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBiomeType.InnerSingleton, Z_Construct_UEnum_GridSystem_EBiomeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBiomeType.InnerSingleton;
}
// ********** End Enum EBiomeType ******************************************************************

// ********** Begin Class UMapTile Function GetWorldPosition ***************************************
struct Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics
{
	struct MapTile_eventGetWorldPosition_Parms
	{
		float TileSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTile_eventGetWorldPosition_Parms, TileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTile_eventGetWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMapTile, nullptr, "GetWorldPosition", Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::MapTile_eventGetWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::MapTile_eventGetWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTile_GetWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTile_GetWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTile::execGetWorldPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWorldPosition(Z_Param_TileSize);
	P_NATIVE_END;
}
// ********** End Class UMapTile Function GetWorldPosition *****************************************

// ********** Begin Class UMapTile *****************************************************************
void UMapTile::StaticRegisterNativesUMapTile()
{
	UClass* Class = UMapTile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWorldPosition", &UMapTile::execGetWorldPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMapTile;
UClass* UMapTile::GetPrivateStaticClass()
{
	using TClass = UMapTile;
	if (!Z_Registration_Info_UClass_UMapTile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapTile"),
			Z_Registration_Info_UClass_UMapTile.InnerSingleton,
			StaticRegisterNativesUMapTile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMapTile.InnerSingleton;
}
UClass* Z_Construct_UClass_UMapTile_NoRegister()
{
	return UMapTile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMapTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapTile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCoord_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biome_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasResource_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/MapTile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Elevation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Biome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Biome;
	static void NewProp_bHasResource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasResource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapTile_GetWorldPosition, "GetWorldPosition" }, // 3641411262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapTile_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTile, GridCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCoord_MetaData), NewProp_GridCoord_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapTile_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTile, Elevation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elevation_MetaData), NewProp_Elevation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapTile_Statics::NewProp_Biome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapTile_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTile, Biome), Z_Construct_UEnum_GridSystem_EBiomeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biome_MetaData), NewProp_Biome_MetaData) }; // 4117757392
void Z_Construct_UClass_UMapTile_Statics::NewProp_bHasResource_SetBit(void* Obj)
{
	((UMapTile*)Obj)->bHasResource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapTile_Statics::NewProp_bHasResource = { "bHasResource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapTile), &Z_Construct_UClass_UMapTile_Statics::NewProp_bHasResource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasResource_MetaData), NewProp_bHasResource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTile_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTile_Statics::NewProp_Elevation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTile_Statics::NewProp_Biome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTile_Statics::NewProp_Biome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTile_Statics::NewProp_bHasResource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GridSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTile_Statics::ClassParams = {
	&UMapTile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapTile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTile_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTile()
{
	if (!Z_Registration_Info_UClass_UMapTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTile.OuterSingleton, Z_Construct_UClass_UMapTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTile.OuterSingleton;
}
UMapTile::UMapTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTile);
UMapTile::~UMapTile() {}
// ********** End Class UMapTile *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBiomeType_StaticEnum, TEXT("EBiomeType"), &Z_Registration_Info_UEnum_EBiomeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117757392U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTile, UMapTile::StaticClass, TEXT("UMapTile"), &Z_Registration_Info_UClass_UMapTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTile), 1100777885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_455091689(TEXT("/Script/GridSystem"),
	Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h__Script_GridSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
