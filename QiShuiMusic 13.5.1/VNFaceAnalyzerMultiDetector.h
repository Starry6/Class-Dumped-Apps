@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)_isFaceprintJunk:;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (float)faceBoundingBoxScalingFactorForFaceObservation:;
@end
