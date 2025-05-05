@interface VCPPreAnalysisImageLoader : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMonochromeBufferCreator:;
- (int)_createPixelBufferWithWidth:height:pixelFormat:pixelBuffer:;
- (int)_convertFromBuffer:toLumaPixelBuffer:abnormalDimension:;
- (int)loadImageURL:abnormalDimension:withNonPanoPreWarmSizes:toColorPixelBuffer:lumaPixelBuffer:andImage:;
@end
