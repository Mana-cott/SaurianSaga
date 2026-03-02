// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaurianSaga_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SAURIANSAGA_API UFunction* Z_Construct_UDelegateFunction_SaurianSaga_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SaurianSaga;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SaurianSaga()
	{
		if (!Z_Registration_Info_UPackage__Script_SaurianSaga.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SaurianSaga_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SaurianSaga",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x036EC61C,
			0x312174A4,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SaurianSaga.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SaurianSaga.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SaurianSaga(Z_Construct_UPackage__Script_SaurianSaga, TEXT("/Script/SaurianSaga"), Z_Registration_Info_UPackage__Script_SaurianSaga, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x036EC61C, 0x312174A4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
