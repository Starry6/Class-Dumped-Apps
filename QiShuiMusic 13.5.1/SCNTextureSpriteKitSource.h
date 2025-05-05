@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource
@property (nonatomic) SKScene scene;
- (void)setScene:;
- (void)dealloc;
- (id)scene;
- (void)cleanup:;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (id)textureWithEngineContext:textureSampler:nextFrameTime:;
- (void)renderWithEngineContext:textureSampler:nextFrameTime:;
- (void)__renderSKScene:withSKSCNRenderer:engineContext:viewport:atTime:;
- (double)__updateTextureWithSKScene:engineContext:sampler:;
@end
