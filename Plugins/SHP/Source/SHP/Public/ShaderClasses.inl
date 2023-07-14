
class FMyShaderVS : public FGlobalShader
{
	DECLARE_EXPORTED_SHADER_TYPE(FMyShaderVS, Global, SHP_API);

	FMyShaderVS() { }
	FMyShaderVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
	}

	static bool ShouldCache(EShaderPlatform Platform)
	{
		return true;
	}
};
IMPLEMENT_SHADER_TYPE(, FMyShaderVS, TEXT("/CustomShaders/MyShader.usf"), TEXT("MainVS"), SF_Vertex);