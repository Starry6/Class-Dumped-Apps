@interface VNRemoveBackgroundProcessor : VNEspressoModelFileBasedDetector
- (void)dealloc;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (BOOL)needsMetalContext;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:;
@end
