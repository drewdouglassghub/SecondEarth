// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapTile.h"

#ifdef GRIDSYSTEM_MapTile_generated_h
#error "MapTile.generated.h already included, missing '#pragma once' in MapTile.h"
#endif
#define GRIDSYSTEM_MapTile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMapTile *****************************************************************
#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldPosition);


GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapTile_NoRegister();

#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapTile(); \
	friend struct Z_Construct_UClass_UMapTile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDSYSTEM_API UClass* Z_Construct_UClass_UMapTile_NoRegister(); \
public: \
	DECLARE_CLASS2(UMapTile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridSystem"), Z_Construct_UClass_UMapTile_NoRegister) \
	DECLARE_SERIALIZER(UMapTile)


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMapTile(UMapTile&&) = delete; \
	UMapTile(const UMapTile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapTile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapTile) \
	NO_API virtual ~UMapTile();


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_17_PROLOG
#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_INCLASS_NO_PURE_DECLS \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMapTile;

// ********** End Class UMapTile *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapTile_h

// ********** Begin Enum EBiomeType ****************************************************************
#define FOREACH_ENUM_EBIOMETYPE(op) \
	op(EBiomeType::Grassland) \
	op(EBiomeType::Desert) \
	op(EBiomeType::Forest) \
	op(EBiomeType::Mountain) \
	op(EBiomeType::Water) 

enum class EBiomeType : uint8;
template<> struct TIsUEnumClass<EBiomeType> { enum { Value = true }; };
template<> GRIDSYSTEM_API UEnum* StaticEnum<EBiomeType>();
// ********** End Enum EBiomeType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
