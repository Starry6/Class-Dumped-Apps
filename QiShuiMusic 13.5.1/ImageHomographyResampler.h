@interface ImageHomographyResampler : NSObject
- (id)init;
- (void)setHomographyMatrix:;
- (id)ResampleCGImage:clipToRect:outputSize:;
- (void)EraseCVPixelBuffer:;
- (void)ClearOutOfBoundsPixels:;
- (id)ResampleCVPixels:clipToRect:outputSize:;
- (short)ResampleCVPixels:clipToRect:outputSize:toPixelBuffer:;
@end
