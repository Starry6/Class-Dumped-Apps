@interface MetalFilterYUVtoRBG : MetalFilterDefault
- (void)generateVertex:;
- (id)buildRenderPiplneStateForPixFmt:outPixelFmt:;
- (void)checkColorConversion:YCbCrMatrixAttachment:;
- (id)createPixelTextureWithFrame:format:;
- (id)getFragmentShader;
- (id)getFragmentShader:;
- (id)initWithInputFmt:;
- (id)initWithInputFmt:param:;
- (long long)renderBefore:frame:;
- (id)setUpRenderPipeline:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
