@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)_isFaceprintJunk:;
- (void)_addFaceAnalysisResultsFromMap:toFaceAttributeObject:forOriginatingRequestSpecifier:;
- (BOOL)_saveFaceprint:toFaceObservation:options:error:;
- (BOOL)_saveFaceAttributes:toFaceObservation:options:error:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)modelVersionForOptions:;
+ (Class)detectorClassForConfigurationOptions:error:;
+ (id)keyForDetectorWithConfigurationOptions:;
+ (unsigned long long)numberOfImageChannels;
@end
