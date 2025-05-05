@interface HTSGLAspectScaleFilter : HTSGLFilter
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) {CGSize=dd} inputSize;
@property (nonatomic) q mode;
@property (nonatomic) {CGAffineTransform=dddddd} transformBeforeAspectScale;
@property (nonatomic) {CGSize=dd} fitInAspectRatio;
@property (nonatomic) {CGSize=dd} renderSize;
- (id)fitInAspectRatio;
- (void)forceProcessingAtSize:;
- (void)forceProcessingAtSizeRespectingAspectRatio:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setFitInAspectRatio:;
- (void)setInputSize:atIndex:;
- (void)setTransformBeforeAspectScale:;
- (id)transformBeforeAspectScale;
- (void)setTargetSize:;
- (id)renderSize;
- (id)targetSize;
- (id)initWithContext:;
- (id)inputSize;
- (long long)mode;
- (void)setMode:;
- (void)setInputSize:;
- (void)setRenderSize:;
@end
