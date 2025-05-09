@interface VNImageAnalyzerMultiDetector : VNDetector
@property (nonatomic) BOOL hasObjDetNet;
@property (nonatomic) BOOL hasSliderNet;
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (id)initWithConfigurationOptions:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)warmUpSession:withOptions:error:;
- (BOOL)canBehaveAsDetectorOfClass:withConfiguration:;
- (BOOL)shouldBeReplacedByDetectorOfClass:withConfiguration:;
- (unsigned long long)signPostAdditionalParameter;
- (id)_junkObservationsForLastAnalysisWithOptions:error:;
- (id)_processFullImagePixelBuffer:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (BOOL)hasObjDetNet;
- (BOOL)hasSliderNet;
- (id)allSceneIdentifiersWithOptions:error:;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:error:;
- (id)allJunkIdentifiersForOptions:error:;
- (id)allRecognizedObjectsIdentifiersWithOptions:error:;
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:error:;
- (id)allSignificantEventIdentifiersWithOptions:error:;
- (id)allCityNatureIdentifiersWithOptions:error:;
+ (id)blacklistForModel:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (id)allPhotosAdjustmentKeysForOptions:error:;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_5_10_0;
+ (id)availableVNInferenceNetworkIdentifierSceneNetVersions;
+ (BOOL)_getAnalyzerName:version:forModel:configuredWithOptions:error:;
+ (id)_inputImageBlobNameForModel:configuredWithOptions:;
+ (id)inferenceNetworkIdentifiers;
+ (unsigned long long)modelForRequestClass:revision:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_3_0_0;
+ (id)availableVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNetVersions;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNet_3_0_0;
+ (id)supportedImageSizeSetForOptions:error:;
+ (id)createHierarchicalModelForMultiDetectorModel:error:;
+ (Class)detectorClassForConfigurationOptions:error:;
@end
