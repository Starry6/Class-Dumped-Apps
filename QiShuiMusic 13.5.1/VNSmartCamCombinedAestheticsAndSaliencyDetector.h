@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)warmUpSession:withOptions:error:;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:;
- (id)_classifyAesthetics:generateSaliencyHeatMap:for32BGRAImageInPixelBuffer:withOptions:modelInputImageSize:originalImageSize:regionOfInterest:warningRecorder:error:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
