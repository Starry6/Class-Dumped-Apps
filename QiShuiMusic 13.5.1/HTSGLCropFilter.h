@interface HTSGLCropFilter : HTSGLFilter
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRegion;
@property (nonatomic) BOOL passMemOpt;
- (void)updatePipeline:;
- (id)initWithCropRegion:context:;
- (void)initializeRenderer:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (BOOL)passMemOpt;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setCropRegion:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setPassMemOpt:;
- (id)initWithContext:;
- (void)setFillMode:;
- (id)cropRegion;
@end
