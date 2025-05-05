@interface VNEspressoModelClassifier : VNDetector
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (id)getLabels;
- (id)calculateImageDescriptors:regionOfInterest:warningRecorder:canceller:error:;
- (id)blacklistedIdentifiers;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)createClassifierWithDescriptor:classifierAbsolutePath:computePlatform:computePath:labelsFilename:options:;
+ (id)createDescriprorProcessorWithModelPath:nBatch:computePlatform:computePath:options:;
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:;
+ (id)createObservationWithDescriptors:forOriginatingRequestSpecifier:;
+ (void)initDumpDebugIntermediates:debugInfo:;
+ (id)createHierarchicalModelForOriginatingRequestSpecifier:error:;
+ (void)convertRelationships:toStdRelationships:;
@end
