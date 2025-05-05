@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator
- (void)dealloc;
- (int)profile;
- (void)emptyShaderCache;
- (id)_newProgramWithHashCode:engineContext:introspectionDataPtr:;
- (void)_loadSourceCode;
- (id)initAllowingHotReload:;
- (id)_newProgramWithHashCodeWithFunctionConstants:engineContext:introspectionDataPtr:;
- (void)collectShaderForProgram:newVertexFunctionName:newFragmentFunctionName:sourceCodeBlock:additionalFileBlock:;
@end
