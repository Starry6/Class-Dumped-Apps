@interface VNGuidedUpsamplingGenerator : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (BOOL)needsMetalContext;
- (BOOL)_renderCIImage:toBuffer:width:height:rowBytes:format:error:;
- (id)_renderCIImage:width:height:format:error:;
+ (id)configurationOptionKeysForDetectorKey;
@end
