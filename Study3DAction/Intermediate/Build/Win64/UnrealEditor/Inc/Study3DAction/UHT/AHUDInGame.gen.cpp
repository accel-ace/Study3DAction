// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study3DAction/Public/HUD/AHUDInGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAHUDInGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
STUDY3DACTION_API UClass* Z_Construct_UClass_AAHUDInGame();
STUDY3DACTION_API UClass* Z_Construct_UClass_AAHUDInGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study3DAction();
// End Cross Module References

// Begin Class AAHUDInGame
void AAHUDInGame::StaticRegisterNativesAAHUDInGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAHUDInGame);
UClass* Z_Construct_UClass_AAHUDInGame_NoRegister()
{
	return AAHUDInGame::StaticClass();
}
struct Z_Construct_UClass_AAHUDInGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/AHUDInGame.h" },
		{ "ModuleRelativePath", "Public/HUD/AHUDInGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAHUDInGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAHUDInGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Study3DAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAHUDInGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAHUDInGame_Statics::ClassParams = {
	&AAHUDInGame::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAHUDInGame_Statics::Class_MetaDataParams), Z_Construct_UClass_AAHUDInGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAHUDInGame()
{
	if (!Z_Registration_Info_UClass_AAHUDInGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAHUDInGame.OuterSingleton, Z_Construct_UClass_AAHUDInGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAHUDInGame.OuterSingleton;
}
template<> STUDY3DACTION_API UClass* StaticClass<AAHUDInGame>()
{
	return AAHUDInGame::StaticClass();
}
AAHUDInGame::AAHUDInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAHUDInGame);
AAHUDInGame::~AAHUDInGame() {}
// End Class AAHUDInGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Public_HUD_AHUDInGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAHUDInGame, AAHUDInGame::StaticClass, TEXT("AAHUDInGame"), &Z_Registration_Info_UClass_AAHUDInGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAHUDInGame), 1337720091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Public_HUD_AHUDInGame_h_3852987376(TEXT("/Script/Study3DAction"),
	Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Public_HUD_AHUDInGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UE5Projects_Study3DAction_Study3DAction_Source_Study3DAction_Public_HUD_AHUDInGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
