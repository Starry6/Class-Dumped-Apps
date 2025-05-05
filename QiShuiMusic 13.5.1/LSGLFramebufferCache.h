@interface LSGLFramebufferCache : NSObject
@property (nonatomic) BOOL reloadTextureFlag;
@property (nonatomic) <LSGLContextProtocol> context;
- (void)addFramebufferToActiveImageCaptureList:;
- (id)fetchFramebufferForSize:onlyTexture:;
- (id)fetchFramebufferForSize:textureOptions:onlyTexture:;
- (id)fetchFramebufferForSize:textureOptions:onlyTexture:bindPixelbuffer:;
- (id)hashForSize:textureOptions:onlyTexture:;
- (id)hashNumberForSize:onlyTexture:;
- (void)purgeAllUnassignedFramebuffers;
- (void)registerMemoryWarningNotify;
- (BOOL)reloadTextureFlag;
- (void)removeFramebufferFromActiveImageCaptureList:;
- (void)returnFramebufferToCache:;
- (void)setReloadTextureFlag:;
- (void)unRegisterMemoryWarningNotify;
- (id)init;
- (void)dealloc;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
