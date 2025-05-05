@interface SCNMTLShaderBindingsGenerator : NSObject
- (id)init;
- (void)dealloc;
- (long long)_searchArguments:forArgumentNamed:type:;
- (void)_parseArguments:function:renderPipeline:;
- (void)generateBindingsForPipeline:withReflection:program:material:geometry:pass:;
- (id)_dictionaryForFrequency:;
- (void)_checkForAssociatedSamplerOnBinding:argument:;
- (void)addResourceBindingsForArgument:frequency:needsRenderResource:block:;
- (BOOL)addPassResourceBindingsForArgument:;
+ (void)allocateRegistry;
+ (void)deallocateRegistry;
+ (void)registerSemantic:withBlock:;
+ (void)registerArgument:frequency:block:;
+ (void)registerArgument:frequency:needsRenderResource:block:;
+ (void)registerUserBlockTrampoline:;
+ (void)registerShadableArgumentBindingBlockForBuffers:textures:samplers:;
@end
