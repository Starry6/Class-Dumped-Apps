@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource
@property (nonatomic) CALayer layer;
- (void)setLayer:;
- (void)dealloc;
- (id)layer;
- (void)cleanup:;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (BOOL)supportsMetal;
- (BOOL)prefersGL3;
- (void)renderWithEngineContext:textureSampler:nextFrameTime:status:;
- (id)layerToFocusForRenderedLayer:;
- (float)clearValue;
- (BOOL)requiresMainThreadUpdates;
- (void)_resizeLayer:toSize:updateLayer:updateTransform:caRenderer:;
- (double)__renderLayerUsingMetal:withCARenderer:engineContext:viewport:atTime:forceUpdate:didUpdate:;
- (double)__renderLayer:withCARenderer:engineContext:viewport:atTime:forceUpdate:didUpdate:;
- (double)__updateTextureWithLayer:texture:engineContext:sampler:;
- (id)layerSizeInPixels;
- (double)layerContentsScaleFactor;
- (id)textureWithEngineContext:textureSampler:nextFrameTime:;
- (id)_textureWithEngineContext:textureSampler:nextFrameTime:;
@end
