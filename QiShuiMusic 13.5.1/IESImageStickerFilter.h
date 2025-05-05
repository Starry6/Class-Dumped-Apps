@interface IESImageStickerFilter : HTSGLFilter
@property (nonatomic) IESStickerAdapter stickerAdapter;
@property (nonatomic) VERenderer alphaTextureRenderer;
@property (nonatomic) BOOL redraw;
@property (nonatomic) q maxCacheCount;
@property (nonatomic) IESSticker sticker;
- (void)adaptWithFrame:rotate:;
- (id)alphaTextureRenderer;
- (id)initWithSticker:context:;
- (void)initializeRenderer:;
- (long long)maxCacheCount;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setAlphaTextureRenderer:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setMaxCacheCount:;
- (void)setRedraw:;
- (id)stickerAdapter;
- (void).cxx_destruct;
- (id)sticker;
- (id)updateImage:;
- (BOOL)redraw;
@end
