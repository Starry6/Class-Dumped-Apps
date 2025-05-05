@interface VKGlobeGestureCameraController : VKGestureCameraBehavior
- (void)endPitch:;
- (void)setGlobeView:;
- (void)setCameraManager:;
- (void)beginPan:;
- (BOOL)isPitchIncreasing;
- (void)beginZoom:;
- (void)updatePitch:translation:;
- (void)endRotate:;
- (void)endPan:;
- (void)updateZoom:oldFactor:newFactor:;
- (void)beginPitch:;
- (void)updatePitch:degrees:;
- (void)endZoom:;
- (void)updatePan:lastScreenPoint:;
- (void)updateRotate:atScreenPoint:;
- (void)beginRotate:;
@end
