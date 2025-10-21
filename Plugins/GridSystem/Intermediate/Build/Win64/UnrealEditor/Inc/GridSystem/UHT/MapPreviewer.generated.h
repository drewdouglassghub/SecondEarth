// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapPreviewer.h"

#ifdef GRIDSYSTEM_MapPreviewer_generated_h
#error "MapPreviewer.generated.h already included, missing '#pragma once' in MapPreviewer.h"
#endif
#define GRIDSYSTEM_MapPreviewer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMapPreviewer ************************************************************
GRIDSYSTEM_API UClass* Z_Construct_UClass_AMapPreviewer_NoRegister();

#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapPreviewer(); \
	friend struct Z_Construct_UClass_AMapPreviewer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDSYSTEM_API UClass* Z_Construct_UClass_AMapPreviewer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapPreviewer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridSystem"), Z_Construct_UClass_AMapPreviewer_NoRegister) \
	DECLARE_SERIALIZER(AMapPreviewer)


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapPreviewer(AMapPreviewer&&) = delete; \
	AMapPreviewer(const AMapPreviewer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapPreviewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapPreviewer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapPreviewer) \
	NO_API virtual ~AMapPreviewer();


#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_8_PROLOG
#define FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_11_INCLASS_NO_PURE_DECLS \
	FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapPreviewer;

// ********** End Class AMapPreviewer **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
