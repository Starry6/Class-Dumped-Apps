@interface LSGLPanoramicPreviewView : LSGLPreviewView
- (void)commonInitWithMode:;
- (void)newFrameReadyAtTime:atIndex:;
- (void)resetCameraRotation;
- (void)rotateCameraWithPitch:yaw:;
- (void)updateConfiguration:;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
