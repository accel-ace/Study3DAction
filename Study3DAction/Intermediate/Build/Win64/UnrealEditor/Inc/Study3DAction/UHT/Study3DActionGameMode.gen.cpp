// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study3DAction/Study3DActionGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudy3DActionGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STUDY3DACTION_API UClass* Z_Construct_UClass_AStudy3DActionGameMode();
STUDY3DACTION_API UClass* Z_Construct_UClass_AStudy3DActionGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study3DAction();
// End Cross Module References

// Begin Class AStudy3DActionGameMode
void AStudy3DActionGameMode::StaticRegisterNativesAStudy3DActionGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudy3DActionGameMode);
UClass* Z_Construct_UClass_AStudy3DActionGameMode_NoRegister()
{
	return AStudy3DActionGameMode::StaticClass();
}
struct Z_Construct_UClass_AStudy3DActionGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Study3DActionGameMode.h" },
		{ "ModuleRelativePath", "Study3DActionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudy3DActionGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStudy3DActionGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Study3DAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy3DActionGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudy3DActionGameMode_Statics::ClassParams = {
	&AStudy3DActionGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy3DActionGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStudy3DActionGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStudy3DActionGameMode()
{
	if (!Z_Registration_Info_UClass_AStudy3DActionGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudy3DActionGameMode.OuterSingleton, Z_Construct_UClass_AStudy3DActionGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStudy3DActionGameMode.OuterSingleton;
}
template<> STUDY3DACTION_API UClass* StaticClass<AStudy3DActionGameMode>()
{
	return AStudy3DActionGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStudy3DActionGameMode);
AStudy3DActionGameMode::~AStudy3DActionGameMode() {}
// End Class AStudy3DActionGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Study3DActionGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStudy3DActionGameMode, AStudy3DActionGameMode::StaticClass, TEXT("AStudy3DActionGameMode"), &Z_Registration_Info_UClass_AStudy3DActionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudy3DActionGameMode), 3457775655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Study3DActionGameMode_h_2207257038(TEXT("/Script/Study3DAction"),
	Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Study3DActionGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Study3DActionGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
