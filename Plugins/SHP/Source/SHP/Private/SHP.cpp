// Copyright Epic Games, Inc. All Rights Reserved.

#include "SHP.h"
#include "Interfaces/IPluginManager.h"
#define LOCTEXT_NAMESPACE "FSHPModule"

void FSHPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString BaseDir = IPluginManager::Get().FindPlugin(TEXT("SHP"))->GetBaseDir();
	FString	PluginShaderDir = FPaths::Combine(BaseDir, TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/CustomShaders"), PluginShaderDir);
}

void FSHPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSHPModule, SHP)