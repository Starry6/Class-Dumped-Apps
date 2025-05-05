@interface VPVRDistortionRender : NSObject
- (void)renderToTexture:withCommandEncoder:leftEye:rightEye:;
- (void)setupDistortionRenderer;
- (void)updateDistortionMeshWithEyes:;
- (id)init;
- (void)dealloc;
+ (id)distortionRenderWithEyes:;
@end
