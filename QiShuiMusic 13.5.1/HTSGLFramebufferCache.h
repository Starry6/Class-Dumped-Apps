@interface HTSGLFramebufferCache : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) q usedSize;
@property (nonatomic) q cacheSize;
- (void)addFramebufferToActiveImageCaptureList:;
- (id)fetchFramebufferForCVPixelBuffer:textureColorType:;
- (id)fetchFramebufferForSize:;
- (id)fetchFramebufferForSize:onlyTexture:;
- (id)fetchFramebufferForSize:onlyTexture:textureColorType:;
- (id)fetchFramebufferForSize:onlyTexture:textureColorType:textureKey:;
- (void)purgeAllUnassignedFramebuffers;
- (void)removeFramebufferFromActiveImageCaptureList:;
- (void)returnFramebufferToCache:;
- (long long)cacheSize;
- (id)init;
- (id)context;
- (long long)usedSize;
- (void).cxx_destruct;
- (void)setContext:;
@end
