@interface IESMMBlurCanvasFilter : IESMMCanvasBaseFilter
@property (nonatomic) HTSGLFilterGaussianBlur blurFilter;
@property (nonatomic) BOOL isSkipCanvas;
- (void)setCanvasRender;
- (void)drawCanvas:;
- (void)drawWithoutEffectRenderer;
- (id)initWithConfig:observable:canvasSize:context:;
- (void)initializeRenderer:;
- (BOOL)isSkipCanvas;
- (void)renderBlurToTexture:textureCoordinates:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setBlurFilter:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setIsSkipCanvas:;
- (void)setupFilterForSize:;
- (void)updateBlurRadiusInPixels:;
- (id)blurFilter;
- (void).cxx_destruct;
@end
