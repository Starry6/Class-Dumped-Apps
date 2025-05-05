@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:runTimeParams:;
- (void)computeCaptionForImage:outputs:;
- (void)computeCaptionForPixelBuffer:outputs:;
- (void)computeCaptionForImageImpl:outputs:;
- (void)computeCaptionForPixelBufferImpl:outputs:;
- (void)computeCaptionForVideoPixelBuffer:outputs:;
- (void)computeCaptionForVideoPixelBufferImpl:outputs:;
@end
