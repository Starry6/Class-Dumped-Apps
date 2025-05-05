@interface VNScreenGazeDetector : VNEspressoModelFileBasedDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
