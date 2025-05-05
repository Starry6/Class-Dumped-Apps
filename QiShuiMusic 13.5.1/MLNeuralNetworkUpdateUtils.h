@interface MLNeuralNetworkUpdateUtils : NSObject
+ (BOOL)loadUpdateParameters:fromCompiledArchive:error:;
+ (id)loadParameterDescriptionsAndContainerFromUpdateParameters:modelDescription:;
+ (id)createClassLabelToIndexMapWith:;
@end
