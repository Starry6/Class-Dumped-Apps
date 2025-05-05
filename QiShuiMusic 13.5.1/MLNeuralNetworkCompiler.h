@interface MLNeuralNetworkCompiler : MLModel
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (void)collectEspressoModelDetails:modelPath:;
+ (BOOL)collectNNModelDetailsFromArchive:spec:error:;
@end
