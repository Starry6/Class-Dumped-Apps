@interface VNFaceGazeDetector : VNDetector
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
+ (id)supportedImageSizeSetForOptions:error:;
@end
