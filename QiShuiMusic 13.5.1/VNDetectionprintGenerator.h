@interface VNDetectionprintGenerator : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (id)_detectionprintTensorForOutputBuffer:originatingRequestSpecifier:error:;
- (id)_analyzePixelBuffer:options:error:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
