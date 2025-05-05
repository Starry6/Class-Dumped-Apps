@interface LAUIMetalRenderLoop : LAUIRenderLoop
@property (nonatomic) Q pixelFormat;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) CALayer layer;
@property (nonatomic) ^{CGColorSpace=} colorSpace;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) {CGSize=dd} drawableSize;
@property (nonatomic) <LAUIMetalRenderLoopDelegate> delegate;
- (void)setColorSpace:;
- (id)init;
- (void)dealloc;
- (id)colorSpace;
- (id)currentDrawable;
- (id)layer;
- (void)setDrawableSize:;
- (BOOL)framebufferOnly;
- (void)setFramebufferOnly:;
- (void).cxx_destruct;
- (unsigned long long)pixelFormat;
- (BOOL)isDrawableAvailable;
- (id)drawableSize;
- (id)device;
- (void)_didInvalidate;
- (void)_willDraw;
- (void)_didDraw;
- (BOOL)_isForcingPause;
- (id)initWithPixelFormat:forDevice:;
@end
