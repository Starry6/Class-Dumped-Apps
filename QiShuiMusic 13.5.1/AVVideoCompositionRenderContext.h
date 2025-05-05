@interface AVVideoCompositionRenderContext : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGAffineTransform=dddddd} renderTransform;
@property (nonatomic) float renderScale;
@property (nonatomic) {?=qq} pixelAspectRatio;
@property (nonatomic) {?=dddd} edgeWidths;
@property (nonatomic) BOOL highQualityRendering;
@property (nonatomic) AVVideoComposition videoComposition;
- (void)dealloc;
- (id)pixelBufferPool;
- (id)newPixelBuffer;
- (id)pixelAspectRatio;
- (id)size;
- (id)videoComposition;
- (float)renderScale;
- (void)_willDeallocOrFinalize;
- (id)renderTransform;
- (id)edgeWidths;
- (BOOL)highQualityRendering;
- (id)initWithFigVideoCompositor:clientRequiredPixelBufferAttributes:videoComposition:pixelBufferPool:;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:;
- (BOOL)isBufferYCbCr:;
+ (id)renderContextPropertiesFromFigCompositor:;
@end
