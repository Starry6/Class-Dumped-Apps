@interface MetalFilterLensDistortion : MetalFilterDefault
- (id)createPixelTextureWithFrame:format:;
- (void)drawFrame:withRenderEncoder:;
- (id)initWithHeadTracker:outputTextureSize:;
- (id)outputTextureSize;
- (long long)renderBefore:frame:;
- (void).cxx_destruct;
+ (id)lensDistortionFilterWithHeadTracker:outputTextureSize:;
@end
