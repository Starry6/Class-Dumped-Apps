@interface VNMRCDetector : VNEspressoModelFileBasedDetector
- (void)dealloc;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
