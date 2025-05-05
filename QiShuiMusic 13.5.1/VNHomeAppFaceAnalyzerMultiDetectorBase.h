@interface VNHomeAppFaceAnalyzerMultiDetectorBase : VNFaceAnalyzerMultiDetectorBase
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
@end
