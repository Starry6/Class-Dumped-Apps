@interface VCPPreAnalysisImage : NSObject
@property (nonatomic) ^{__CVBuffer=} sourcePixelBuffer;
- (id)initWithPixelBuffer:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)sourcePixelBuffer;
- (int)preWarmWidth:andHeight:;
- (int)pixelBuffer:width:height:;
@end
