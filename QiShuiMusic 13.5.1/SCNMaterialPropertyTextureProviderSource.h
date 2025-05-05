@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource
@property (nonatomic) <SCNMaterialPropertyTextureProvider> textureProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)cleanup:;
- (void)setTextureProvider:;
- (id)textureProvider;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (void)renderWithEngineContext:textureSampler:nextFrameTime:;
- (id)cachedTextureWithURL:token:;
- (id)cachedTextureWithURL:token:didFallbackToDefaultTexture:;
- (void)connectToProxy:;
@end
