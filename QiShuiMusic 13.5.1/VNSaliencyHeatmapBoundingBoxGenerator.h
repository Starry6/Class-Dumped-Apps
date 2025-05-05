@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)warmUpSession:withOptions:error:;
- (id)_observationsForOneComponent32FloatPixelBuffer:options:regionOfInterest:error:;
- (id)_createPixelBufferOfWidth:height:fromImageBuffer:options:error:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)calculateSaliencyBoundingBoxesForDetectorType:pixelBuffer:configurationOptions:originatingRequestSpecifier:regionOfInterest:warningRecorder:error:;
@end
