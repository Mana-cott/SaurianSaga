// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaurianSagaCharacter.h"

#ifdef SAURIANSAGA_SaurianSagaCharacter_generated_h
#error "SaurianSagaCharacter.generated.h already included, missing '#pragma once' in SaurianSagaCharacter.h"
#endif
#define SAURIANSAGA_SaurianSagaCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASaurianSagaCharacter ****************************************************
#define FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_ASaurianSagaCharacter_Statics;
SAURIANSAGA_API UClass* Z_Construct_UClass_ASaurianSagaCharacter_NoRegister();

#define FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASaurianSagaCharacter(); \
	friend struct ::Z_Construct_UClass_ASaurianSagaCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAURIANSAGA_API UClass* ::Z_Construct_UClass_ASaurianSagaCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASaurianSagaCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaurianSaga"), Z_Construct_UClass_ASaurianSagaCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASaurianSagaCharacter)


#define FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASaurianSagaCharacter(ASaurianSagaCharacter&&) = delete; \
	ASaurianSagaCharacter(const ASaurianSagaCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaurianSagaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaurianSagaCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASaurianSagaCharacter) \
	NO_API virtual ~ASaurianSagaCharacter();


#define FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_21_PROLOG
#define FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASaurianSagaCharacter;

// ********** End Class ASaurianSagaCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aperc_Documents_GitHub_SaurianSaga_SaurianSaga_Source_SaurianSaga_SaurianSagaCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
