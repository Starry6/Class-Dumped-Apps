@interface VNPanopticSegmentationGenerator : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
