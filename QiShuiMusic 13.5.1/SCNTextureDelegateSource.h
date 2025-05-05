@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource
@property (nonatomic) @ delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)cleanup:;
- (id)textureWithEngineContext:textureSampler:nextFrameTime:;
- (void)renderWithEngineContext:textureSampler:nextFrameTime:;
- (void)__updateTextureWithDelegate:engineContext:;
@end
