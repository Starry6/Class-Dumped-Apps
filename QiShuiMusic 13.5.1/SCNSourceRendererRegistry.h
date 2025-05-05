@interface SCNSourceRendererRegistry : NSObject
- (id)init;
- (void)dealloc;
- (void)rendererDidChange:;
- (id)sourceRendererForEngineContext:source:textureSource:targetTexture:;
- (void)removeSourceRenderersForEngineContext:;
- (void)endFrameForEngineContext:;
- (void)removeSourceRenderersForSource:;
+ (id)sharedRegistry;
@end
