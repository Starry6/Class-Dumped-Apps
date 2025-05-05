@interface VEHdrEffectOptFilter : HTSGLFilter
@property (nonatomic) HTSGLFramebuffer sdr2hdrFramebuffer;
@property (nonatomic) BOOL isMetalSupported;
@property (nonatomic) VEMVPRenderer pixelBufferRenderer;
@property (nonatomic) BOOL isPassThrough;
@property (nonatomic) q colorPrimaries;
@property (nonatomic) q transferFunction;
- (void)initializeRenderer:;
- (BOOL)isMetalSupported;
- (BOOL)isPassThrough;
- (id)pixelBufferRenderer;
- (id)processFakeSDR2HDRFramebuffer:;
- (BOOL)processLensSDR2HDR;
- (void)processVESDR2HDR;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (id)sdr2hdrFramebuffer;
- (void)setIsMetalSupported:;
- (void)setIsPassThrough:;
- (void)setPixelBufferRenderer:;
- (void)setSdr2hdrFramebuffer:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (long long)colorPrimaries;
- (void)setColorPrimaries:;
- (long long)transferFunction;
- (void)setTransferFunction:;
@end
