@interface IESMMColorCanvasFilter : IESMMCanvasBaseFilter
@property (nonatomic) BOOL enableHdrEffectOptimization;
- (void)setEnableHdrEffectOptimization:;
- (void)drawCanvas:shouldDraw:;
- (void)drawWithoutEffectRenderer;
- (BOOL)enableHdrEffectOptimization;
- (void)initializeRenderer:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)renderToTextureWithVertices:textureCoordinates:;
@end
