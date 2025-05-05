@interface HTSGLResizeRotateFilter : HTSGLFilter
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) {CGSize=dd} inputSize;
@property (nonatomic) {CGSize=dd} renderSize;
@property (nonatomic) Q outputRotation;
@property (nonatomic) BOOL onlyRotated;
@property (nonatomic) BOOL resourceRotationMode;
- (void)setOnlyRotated:;
- (void)forceProcessingAtSize:;
- (void)forceProcessingAtSizeRespectingAspectRatio:;
- (BOOL)onlyRotated;
- (unsigned long long)outputRotation;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (BOOL)resourceRotationMode;
- (void)setInputSize:atIndex:;
- (void)setOutputRotation:;
- (void)setResourceRotationMode:;
- (void)setTargetSize:;
- (id)renderSize;
- (id)targetSize;
- (id)initWithContext:;
- (id)inputSize;
- (void)setInputSize:;
- (void)setRenderSize:;
@end
