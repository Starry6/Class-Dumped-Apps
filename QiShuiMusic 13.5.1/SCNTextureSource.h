@interface SCNTextureSource : NSObject
- (void)dealloc;
- (void)setSize:;
- (void)cleanup:;
- (double)nextFrameTime;
- (id)textureSize;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (BOOL)supportsMetal;
- (BOOL)prefersGL3;
- (id)textureWithEngineContext:textureSampler:nextFrameTime:;
- (id)_textureWithEngineContext:textureSampler:nextFrameTime:;
- (void)renderWithEngineContext:textureSampler:nextFrameTime:;
- (BOOL)shouldFlip;
- (id)rendererContextForTextureSourceWithEngineContext:;
- (id)MTLTextureCache;
- (void)setMTLTextureCache:;
- (id)glTextureCache;
- (void)setGlTextureCache:;
@end
