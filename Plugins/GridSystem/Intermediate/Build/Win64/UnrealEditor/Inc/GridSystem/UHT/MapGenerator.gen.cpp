// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapGenerator();
GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapGenerator_NoRegister();
GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapTile_NoRegister();
GRIDSYSTEM_API UEnum* Z_Construct_UEnum_GridSystem_EBiomeType();
UPackage* Z_Construct_UPackage__Script_GridSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMapGenerator Function DetermineBiome ************************************
struct Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics
{
	struct MapGenerator_eventDetermineBiome_Parms
	{
		float Elevation;
		EBiomeType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Elevation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGenerator_eventDetermineBiome_Parms, Elevation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGenerator_eventDetermineBiome_Parms, ReturnValue), Z_Construct_UEnum_GridSystem_EBiomeType, METADATA_PARAMS(0, nullptr) }; // 4117757392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_Elevation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMapGenerator, nullptr, "DetermineBiome", Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::MapGenerator_eventDetermineBiome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::MapGenerator_eventDetermineBiome_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapGenerator_DetermineBiome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapGenerator_DetermineBiome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapGenerator::execDetermineBiome)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Elevation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBiomeType*)Z_Param__Result=P_THIS->DetermineBiome(Z_Param_Elevation);
	P_NATIVE_END;
}
// ********** End Class UMapGenerator Function DetermineBiome **************************************

// ********** Begin Class UMapGenerator Function GenerateMap ***************************************
struct Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics
{
	struct MapGenerator_eventGenerateMap_Parms
	{
		int32 Width;
		int32 Height;
		int32 Seed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGenerator_eventGenerateMap_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGenerator_eventGenerateMap_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapGenerator_eventGenerateMap_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMapGenerator, nullptr, "GenerateMap", Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::MapGenerator_eventGenerateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::MapGenerator_eventGenerateMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapGenerator_GenerateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapGenerator_GenerateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapGenerator::execGenerateMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMap(Z_Param_Width,Z_Param_Height,Z_Param_Seed);
	P_NATIVE_END;
}
// ********** End Class UMapGenerator Function GenerateMap *****************************************

// ********** Begin Class UMapGenerator ************************************************************
void UMapGenerator::StaticRegisterNativesUMapGenerator()
{
	UClass* Class = UMapGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetermineBiome", &UMapGenerator::execDetermineBiome },
		{ "GenerateMap", &UMapGenerator::execGenerateMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMapGenerator;
UClass* UMapGenerator::GetPrivateStaticClass()
{
	using TClass = UMapGenerator;
	if (!Z_Registration_Info_UClass_UMapGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapGenerator"),
			Z_Registration_Info_UClass_UMapGenerator.InnerSingleton,
			StaticRegisterNativesUMapGenerator,
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
	return Z_Registration_Info_UClass_UMapGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMapGenerator_NoRegister()
{
	return UMapGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMapGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTiles_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/MapGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapGenerator_DetermineBiome, "DetermineBiome" }, // 3751198155
		{ &Z_Construct_UFunction_UMapGenerator_GenerateMap, "GenerateMap" }, // 2472958250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapGenerator_Statics::NewProp_GeneratedTiles_Inner = { "GeneratedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapGenerator_Statics::NewProp_GeneratedTiles = { "GeneratedTiles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapGenerator, GeneratedTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTiles_MetaData), NewProp_GeneratedTiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapGenerator_Statics::NewProp_GeneratedTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapGenerator_Statics::NewProp_GeneratedTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GridSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapGenerator_Statics::ClassParams = {
	&UMapGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapGenerator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapGenerator()
{
	if (!Z_Registration_Info_UClass_UMapGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapGenerator.OuterSingleton, Z_Construct_UClass_UMapGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapGenerator.OuterSingleton;
}
UMapGenerator::UMapGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapGenerator);
UMapGenerator::~UMapGenerator() {}
// ********** End Class UMapGenerator **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h__Script_GridSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapGenerator, UMapGenerator::StaticClass, TEXT("UMapGenerator"), &Z_Registration_Info_UClass_UMapGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapGenerator), 3381942334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h__Script_GridSystem_2904714504(TEXT("/Script/GridSystem"),
	Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h__Script_GridSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h__Script_GridSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
