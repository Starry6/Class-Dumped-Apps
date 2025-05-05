@interface MetalFilterVROutput : MetalFilterDefault
@property (nonatomic) Q outputTextureOrientation;
@property (nonatomic) {?=} spaceOrientation;
@property (nonatomic) q statusBarOrientation;
@property (nonatomic) float basisZoom;
- (void)updateOutputTextureOrientation:;
- (id)getVertexShader;
- (float)basisZoom;
- (id)createPixelTextureWithFrame:format:;
- (void)drawFrame:withRenderEncoder:;
- (id)getEffectPatameterStr;
- (id)initWithInputTextureSize:outputTextureSize:disableZaxis:spaceOrientationOptDisable:;
- (unsigned long long)outputTextureOrientation;
- (long long)renderBefore:frame:;
- (id)spaceOrientation;
- (long long)statusBarOrientation;
- (void)setStatusBarOrientation:;
- (void).cxx_destruct;
- (id)vertexBuffer;
+ (id)filterWithInputTextureSize:outputTextureSize:disableZaxis:spaceOrientationOptDisable:;
@end
