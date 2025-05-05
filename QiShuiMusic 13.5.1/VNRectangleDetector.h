@interface VNRectangleDetector : VNDetector
- (void)dealloc;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)needsMetalContext;
+ (id)supportedImageSizeSetForOptions:error:;
@end
