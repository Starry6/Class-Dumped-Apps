@interface VNOpticalFlowGeneratorRevision1 : VNOpticalFlowGenerator
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)needsMetalContext;
@end
