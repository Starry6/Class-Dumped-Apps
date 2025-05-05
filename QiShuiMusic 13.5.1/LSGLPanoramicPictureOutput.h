@interface LSGLPanoramicPictureOutput : LSGLPictureOutput
- (id)initWithOutputFormat:needUpdateOutputSizeFromInput:;
- (void)newFrameReadyAtTime:atIndex:;
- (void)renderToFramebufferV2:;
- (void)resetCameraRotation;
- (void)rotateCameraWithPitch:yaw:;
- (void)setClearColorWithRed:green:blue:alpha:;
- (void)updatePanoramicTextureCoordinate;
- (void)updateConfiguration:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setOutputSize:;
@end
