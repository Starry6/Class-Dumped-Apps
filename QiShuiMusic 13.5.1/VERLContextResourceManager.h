@interface VERLContextResourceManager : NSObject
- (void)destroyResourcesForTEGLContext:;
- (id)renderingDeviceFromRenderScene:;
- (void)cleanupResourcesForTEGLContext:;
- (id)renderingDeviceFromTEGLContext:;
- (void)cleanupResourcesForHTSGLContext:;
- (void)destroyResourcesForHTSGLContext:;
- (id)p_renderingDeviceFromContext:shareContext:;
- (id)renderingDeviceFromHTSGLContext:;
- (id)renderingDeviceFromHTSGLContext:shareContext:;
- (id)renderingDeviceFromTEGLContext:shareContext:;
- (id)rlRenderingDeviceFromHTSGLContext:;
- (id)rlRenderingDeviceFromHTSGLContext:shareContext:;
- (id)rlRenderingDeviceFromTEGLContext:;
- (id)rlRenderingDeviceFromTEGLContext:shareContext:;
- (id)init;
- (void)dealloc;
+ (id)defaultManager;
@end
