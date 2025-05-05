@interface VNSmartCamClassifier : VNEspressoModelClassifier
- (BOOL)completeInitializationForSession:error:;
+ (id)createClassifierWithDescriptor:classifierAbsolutePath:computePlatform:computePath:labelsFilename:options:;
+ (id)createDescriprorProcessorWithModelPath:nBatch:computePlatform:computePath:options:;
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:;
+ (Class)espressoModelImageprintClass;
+ (id)returnAllResultsOptionKey;
+ (id)createObservationWithDescriptors:forOriginatingRequestSpecifier:;
+ (void)initDumpDebugIntermediates:debugInfo:;
@end
