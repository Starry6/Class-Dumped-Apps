@interface VNSegmentationGenerator : VNEspressoModelFileBasedDetector
@property (nonatomic) {BufferSize=QQ} outputMaskSize;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)needsMetalContext;
- (id)outputMaskSize;
- (id)calculateNumberOfTilesForNetworkInputImageSize:networkInputMaskSize:networkOutputMaskSize:rotated:;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:error:;
+ (BOOL)supportsTiling;
@end
