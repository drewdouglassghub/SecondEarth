// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapGenerator.h"

#ifdef GRIDSYSTEM_MapGenerator_generated_h
#error "MapGenerator.generated.h already included, missing '#pragma once' in MapGenerator.h"
#endif
#define GRIDSYSTEM_MapGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EBiomeType : uint8;

// ********** Begin Class UMapGenerator ************************************************************
#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDetermineBiome); \
	DECLARE_FUNCTION(execGenerateMap);


GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapGenerator_NoRegister();

#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapGenerator(); \
	friend struct Z_Construct_UClass_UMapGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMapGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridSystem"), Z_Construct_UClass_UMapGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMapGenerator)


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMapGenerator(UMapGenerator&&) = delete; \
	UMapGenerator(const UMapGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapGenerator) \
	NO_API virtual ~UMapGenerator();


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_8_PROLOG
#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_INCLASS_NO_PURE_DECLS \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMapGenerator;

// ********** End Class UMapGenerator **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
