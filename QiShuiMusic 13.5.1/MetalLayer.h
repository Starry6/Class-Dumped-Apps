@interface MetalLayer : CAMetalLayer
@property (nonatomic) {CGSize=dd} backingSize;
@property (nonatomic) BOOL sRGB;
@property (nonatomic) <GGLLayerDelegate> renderDelegate;
@property (nonatomic) NSInteger backingFormat;
- (BOOL)sRGB;
- (void)_onTimerFired:withPresent:;
- (void)onTimerFired:presentAtTime:;
- (id)initWithDevice:sRGB:;
- (void)display;
- (void)setRenderDelegate:;
- (void)didEnterBackground;
- (void)layoutSublayers;
- (void)onTimerFired:;
- (int)backingFormat;
- (id)backingSize;
- (void).cxx_destruct;
- (void)_createTexture;
- (id).cxx_construct;
- (id)_updateDrawable;
- (void)onTimerFired:presentAfterMinimumDuration:;
- (id)renderDelegate;
@end
