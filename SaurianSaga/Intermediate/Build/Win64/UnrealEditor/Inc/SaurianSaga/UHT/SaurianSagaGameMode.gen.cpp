// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaurianSagaGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSaurianSagaGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAURIANSAGA_API UClass* Z_Construct_UClass_ASaurianSagaGameMode();
SAURIANSAGA_API UClass* Z_Construct_UClass_ASaurianSagaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaurianSaga();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASaurianSagaGameMode *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASaurianSagaGameMode;
UClass* ASaurianSagaGameMode::GetPrivateStaticClass()
{
	using TClass = ASaurianSagaGameMode;
	if (!Z_Registration_Info_UClass_ASaurianSagaGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SaurianSagaGameMode"),
			Z_Registration_Info_UClass_ASaurianSagaGameMode.InnerSingleton,
			StaticRegisterNativesASaurianSagaGameMode,
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
	return Z_Registration_Info_UClass_ASaurianSagaGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASaurianSagaGameMode_NoRegister()
{
	return ASaurianSagaGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASaurianSagaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SaurianSagaGameMode.h" },
		{ "ModuleRelativePath", "SaurianSagaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASaurianSagaGameMode constinit property declarations *********************
// ********** End Class ASaurianSagaGameMode constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASaurianSagaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASaurianSagaGameMode_Statics
UObject* (*const Z_Construct_UClass_ASaurianSagaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SaurianSaga,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASaurianSagaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASaurianSagaGameMode_Statics::ClassParams = {
	&ASaurianSagaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASaurianSagaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASaurianSagaGameMode_Statics::Class_MetaDataParams)
};
void ASaurianSagaGameMode::StaticRegisterNativesASaurianSagaGameMode()
{
}
UClass* Z_Construct_UClass_ASaurianSagaGameMode()
{
	if (!Z_Registration_Info_UClass_ASaurianSagaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASaurianSagaGameMode.OuterSingleton, Z_Construct_UClass_ASaurianSagaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASaurianSagaGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASaurianSagaGameMode);
ASaurianSagaGameMode::~ASaurianSagaGameMode() {}
// ********** End Class ASaurianSagaGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaGameMode_h__Script_SaurianSaga_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASaurianSagaGameMode, ASaurianSagaGameMode::StaticClass, TEXT("ASaurianSagaGameMode"), &Z_Registration_Info_UClass_ASaurianSagaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASaurianSagaGameMode), 1950206514U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaGameMode_h__Script_SaurianSaga_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaGameMode_h__Script_SaurianSaga_3477051213{
	TEXT("/Script/SaurianSaga"),
	Z_CompiledInDeferFile_FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaGameMode_h__Script_SaurianSaga_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaGameMode_h__Script_SaurianSaga_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
