@interface IESGLesPixelBuffRenderer : IESGLesBaseMvpRenderer
- (void)cleanUpTextures;
- (void)render:outSize:;
- (void)colorConversion:;
- (void)deInit;
- (void)innerRender:;
- (void)loadData:frameWidth:frameHeight:planeCount:;
- (void)mapRBGA4PixelBuffer:;
- (void)mappingTexture:imageBuffer:textureFormat:width:height:planeIndex:;
- (void)render:config:;
- (void)renderRgba;
- (void)renderYuv;
- (void)selectRGBAPipeline;
- (void)selectYCbCrPipeline;
- (void)dealloc;
- (id)initWithContext:;
- (void)doInit;
@end
