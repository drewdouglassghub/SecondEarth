// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapPreviewer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapPreviewer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GRIDSYSTEM_API UClass* Z_Construct_UClass_AMapPreviewer();
GRIDSYSTEM_API UClass* Z_Construct_UClass_AMapPreviewer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GridSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapPreviewer ************************************************************
void AMapPreviewer::StaticRegisterNativesAMapPreviewer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapPreviewer;
UClass* AMapPreviewer::GetPrivateStaticClass()
{
	using TClass = AMapPreviewer;
	if (!Z_Registration_Info_UClass_AMapPreviewer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapPreviewer"),
			Z_Registration_Info_UClass_AMapPreviewer.InnerSingleton,
			StaticRegisterNativesAMapPreviewer,
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
	return Z_Registration_Info_UClass_AMapPreviewer.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapPreviewer_NoRegister()
{
	return AMapPreviewer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapPreviewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapPreviewer.h" },
		{ "ModuleRelativePath", "Public/MapPreviewer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapPreviewer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapPreviewer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GridSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapPreviewer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapPreviewer_Statics::ClassParams = {
	&AMapPreviewer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapPreviewer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapPreviewer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapPreviewer()
{
	if (!Z_Registration_Info_UClass_AMapPreviewer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapPreviewer.OuterSingleton, Z_Construct_UClass_AMapPreviewer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapPreviewer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapPreviewer);
AMapPreviewer::~AMapPreviewer() {}
// ********** End Class AMapPreviewer **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h__Script_GridSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapPreviewer, AMapPreviewer::StaticClass, TEXT("AMapPreviewer"), &Z_Registration_Info_UClass_AMapPreviewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapPreviewer), 2445858332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h__Script_GridSystem_1153532009(TEXT("/Script/GridSystem"),
	Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h__Script_GridSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_SecondEarth_Plugins_GridSystem_Source_GridSystem_Public_MapPreviewer_h__Script_GridSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
