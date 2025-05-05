@interface HTSTransformFilter : HTSGLFilter
@property (nonatomic) TransformTextureVertices verticesParams;
@property (nonatomic) {CGSize=dd} canvasSize;
@property (nonatomic) Q clapRotation;
- (unsigned long long)clapRotation;
- (id)initWithTextureVertices:canvasSize:context:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)setClapRotation:;
- (void)setInputSize:atIndex:;
- (void)setVerticesParams:;
- (void)setupTextureVertices:;
- (void)updateTextureVertices:;
- (id)verticesParams;
- (id)canvasSize;
- (void)setCanvasSize:;
- (void).cxx_destruct;
@end
