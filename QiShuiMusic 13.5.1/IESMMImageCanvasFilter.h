@interface IESMMImageCanvasFilter : IESMMCanvasBaseFilter
@property (nonatomic) HTSGLFramebuffer hdrBgImageFramebuffer;
@property (nonatomic) BOOL enableHdrEffectOptimization;
- (void)setEnableHdrEffectOptimization:;
- (void)drawCanvas:;
- (void)drawWithoutEffectRenderer;
- (BOOL)enableHdrEffectOptimization;
- (id)hdrBgImageFramebuffer;
- (void)initializeRenderer:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setHdrBgImageFramebuffer:;
- (void).cxx_destruct;
@end
