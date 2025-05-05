@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (void)fullyPopulateConfigurationOptions:;
+ (id)inferenceNetworkIdentifiers;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (id)availableVNInferenceNetworkIdentifierStandaloneSceneprintVersions;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierStandaloneSceneprint_3_0_0;
@end
