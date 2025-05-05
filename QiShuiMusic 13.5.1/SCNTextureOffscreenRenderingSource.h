@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
- (void)cleanup:;
- (id)textureSize;
- (void)_createFramebufferWithEngineContext:size:;
- (id)__prepareFramebufferWithSize:withEngineContext:textureSampler:needsStencil:;
- (void)_buildMipmaps:;
- (void)_bindFramebuffer:;
- (void)_unbindFramebuffer:;
@end
