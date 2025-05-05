@interface VNCoreMLTransformer : VNDetector
@property (nonatomic) VNCoreMLModel model;
- (id)model;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)needsMetalContext;
- (id)initWithOptions:model:error:;
@end
