@interface MetalFilterPanorama : MetalFilterDefault
@property (nonatomic) q postNotifiVRPoseInterval;
- (id)getVertexShader;
- (void)rotateWithPitch:andYaw:andRoll:;
- (id)createPixelTextureWithFrame:format:;
- (void)drawFrame:withRenderEncoder:;
- (id)getFragmentShader;
- (long long)postNotifiVRPoseInterval;
- (void)recenter;
- (long long)renderAfter;
- (long long)renderBefore:frame:;
- (void)setPostNotifiVRPoseInterval:;
- (void)updateBackStickerWithImage:;
- (void)updateParams;
- (void)updateTextureWithFrame:renderEncoder:;
- (id)init;
- (id)process:;
- (void)setEffect:;
- (void).cxx_destruct;
@end
