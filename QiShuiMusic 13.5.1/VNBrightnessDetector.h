@interface VNBrightnessDetector : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (id)_createPixelBufferFromImageBuffer:regionOfInterest:maximumIntermediateSideLength:options:error:;
+ (BOOL)isReentrant;
@end
