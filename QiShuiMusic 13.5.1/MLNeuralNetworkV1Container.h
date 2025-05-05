@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer
+ (id)readerFromArchive:error:;
+ (id)containerFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
