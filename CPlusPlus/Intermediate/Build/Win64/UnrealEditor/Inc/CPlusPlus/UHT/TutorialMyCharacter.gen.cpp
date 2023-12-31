// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlus/TutorialMyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialMyCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ATutorialMyCharacter();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ATutorialMyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPlusPlus();
// End Cross Module References
	DEFINE_FUNCTION(ATutorialMyCharacter::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void ATutorialMyCharacter::StaticRegisterNativesATutorialMyCharacter()
	{
		UClass* Class = ATutorialMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActor", &ATutorialMyCharacter::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "TutorialMyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialMyCharacter, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialMyCharacter);
	UClass* Z_Construct_UClass_ATutorialMyCharacter_NoRegister()
	{
		return ATutorialMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlus,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialMyCharacter_SpawnActor, "SpawnActor" }, // 4292253746
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TutorialMyCharacter.h" },
		{ "ModuleRelativePath", "TutorialMyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialMyCharacter_Statics::NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "TutorialMyCharacter" },
		{ "ModuleRelativePath", "TutorialMyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATutorialMyCharacter_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATutorialMyCharacter, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::NewProp_actorBPToSpawn_MetaData), Z_Construct_UClass_ATutorialMyCharacter_Statics::NewProp_actorBPToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialMyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialMyCharacter_Statics::NewProp_actorBPToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialMyCharacter_Statics::ClassParams = {
		&ATutorialMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorialMyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialMyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATutorialMyCharacter()
	{
		if (!Z_Registration_Info_UClass_ATutorialMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialMyCharacter.OuterSingleton, Z_Construct_UClass_ATutorialMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATutorialMyCharacter.OuterSingleton;
	}
	template<> CPLUSPLUS_API UClass* StaticClass<ATutorialMyCharacter>()
	{
		return ATutorialMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialMyCharacter);
	ATutorialMyCharacter::~ATutorialMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_TutorialMyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_TutorialMyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialMyCharacter, ATutorialMyCharacter::StaticClass, TEXT("ATutorialMyCharacter"), &Z_Registration_Info_UClass_ATutorialMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialMyCharacter), 36475342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_TutorialMyCharacter_h_1827478908(TEXT("/Script/CPlusPlus"),
		Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_TutorialMyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_TutorialMyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
