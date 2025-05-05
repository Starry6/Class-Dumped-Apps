@interface VEEffectMaskFilter : HTSGLFilter
@property (nonatomic) ^v mattingBlendHandle;
@property (nonatomic) I maskTexture;
@property (nonatomic) HTSGLFramebuffer maskFrameBuffer;
@property (nonatomic) HTSGLFramebuffer lastBuffer;
@property (nonatomic) BOOL enableRenderLib;
@property (nonatomic) BOOL enableAgfxMetal;
- (BOOL)enableAgfxMetal;
- (BOOL)enableRenderLib;
- (id)maskFrameBuffer;
- (void)setMaskTexture:;
- (void)initEffect;
- (unsigned int)maskTexture;
- (id)mattingBlendHandle;
- (void)p_skipFrameProcess;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setEnableAgfxMetal:;
- (void)setEnableRenderLib:;
- (void)setMaskFrameBuffer:;
- (void)setMattingBlendHandle:;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)lastBuffer;
- (void)setLastBuffer:;
@end
