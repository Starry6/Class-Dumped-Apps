@interface VKDaVinciGestureCameraController : VKGestureCameraBehavior
- (void)endPitch:;
- (void)beginPan:;
- (BOOL)isPitchIncreasing;
- (void)beginZoom:;
- (void)updateWithTimestamp:withContext:;
- (void)updatePitch:translation:;
- (void)endRotate:;
- (void)endPan:;
- (void)updateZoom:oldFactor:newFactor:;
- (void)beginPitch:;
- (void)updatePitch:degrees:;
- (void)endZoom:;
- (void)updatePan:lastScreenPoint:;
- (id)initWithCameraController:cameraManager:;
- (void)updateRotate:atScreenPoint:;
- (void)beginRotate:;
@end
