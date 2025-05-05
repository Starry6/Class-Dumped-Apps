@interface CIHomographyResampler : ImageHomographyResampler
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} hightlightRect;
- (id)init;
- (void).cxx_destruct;
- (id)ResampleCVPixels:clipToRect:outputSize:;
- (id)ResampleCVPixels:clipToRect:outputSize:pixelBufferPool:;
- (void)updateBackgroundFill:;
- (short)ResampleCVPixels:clipToRect:outputSize:toPixelBuffer:;
- (id)hightlightRect;
- (void)setHightlightRect:;
@end
