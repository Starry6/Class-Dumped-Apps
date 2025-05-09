@interface MDDisplayLayer : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double contentScale;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) <GGLRenderQueueSource> renderSource;
@property (nonatomic) BOOL multiSample;
@property (nonatomic) BOOL supportsFramebufferFetch;
@property (nonatomic) r^{RenderTargetFormat=[4i]QIi} format;
@property (nonatomic) ^v renderer;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) {CGSize=dd} sizeInPixels;
@property (nonatomic) ^v finalRenderTarget;
@property (nonatomic) r^{RenderTargetFormat=[4i]QIi} linearFormat;
@property (nonatomic) ^v linearRenderTarget;
@property (nonatomic) ^v blitRenderTarget;
@property (nonatomic) r^{RenderTargetFormat=[4i]QIi} blitFormat;
@property (nonatomic) float averageFPS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)contentScale;
- (id)bitmapData;
- (BOOL)shouldRasterize;
- (id)finalRenderTarget;
- (void)setContentsGravity:;
- (void)drawInContext:;
- (id)renderSource;
- (id)renderer;
- (void)destroyRenderTarget;
- (id)sizeInPixels;
- (void)setContentScale:;
- (id)flipImage;
- (void)createRenderTarget;
- (BOOL)hasRenderTarget;
- (id)blitRenderTarget;
- (id)linearRenderTarget;
- (void)setNeedsDisplayOnBoundsChange:;
- (void)setRenderSource:;
- (void)setBackgroundColor:;
- (void)dealloc;
- (id)format;
- (void)didReceiveMemoryWarning;
- (float)averageFPS;
- (void)_prepareTexture:isDrawable:;
- (id)_renderQueueForTimestamp:prepareHandler:;
- (id)layer;
- (void)prepareTexture:;
- (void)_didReadPixels:;
- (void)didEnterBackground;
- (id)convertPoint:toLayer:;
- (void)enablePerformanceHUD:;
- (BOOL)supportsFramebufferFetch;
- (void)prepareTargetsForPlatormsWithFramebufferFetch:;
- (id)debugConsoleForId:;
- (id)linearFormat;
- (BOOL)multiSample;
- (void)expandedPerformanceHUD:;
- (id)blitFormat;
- (void)setBounds:;
- (void)prepareTargetsForPlatormsWithoutFramebufferFetch:isDrawable:;
- (void)willUpdateFrameTexture;
- (void).cxx_destruct;
- (id)initWithContentScale:useMultisampling:extraColorFormats:shouldRasterize:allowBlitToDrawable:taskContext:device:sharedResources:signpostId:;
- (void)willPresent;
- (void)setOpaque:;
- (void)drawToTexture:withRenderQueue:completionHandler:;
- (id)bounds;
- (void)didPresent;
- (void)renderWithTimestamp:completion:;
- (void)didUpdateFrameTexture;
- (BOOL)isDelayedRenderQueueConsumptionSupported;
- (id)renderQueueForTimestamp:;
- (id).cxx_construct;
- (void)drawToTexture:withRenderQueue:;
- (void)setSize:;
- (void)disablePerformanceHUD:;
- (id)size;
@end
