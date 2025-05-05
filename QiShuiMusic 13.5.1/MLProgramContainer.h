@interface MLProgramContainer : MLNeuralNetworkContainer
+ (void)updateOptionalDefaultValueParametersInContainer:usingProgram:;
+ (id)loadProgramFromCompiledArchive:error:;
+ (BOOL)populateInputNameToShapeMap:fromContainer:forFunction:program:withValidation:error:;
+ (id)loadProgramAtURL:error:;
+ (id)containerFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
