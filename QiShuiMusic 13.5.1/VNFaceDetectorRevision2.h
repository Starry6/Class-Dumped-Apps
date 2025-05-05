@interface VNFaceDetectorRevision2 : VNFaceDetector
- (void)purgeIntermediates;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:error:;
@end
