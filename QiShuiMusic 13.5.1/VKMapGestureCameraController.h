@interface VKMapGestureCameraController : VKGestureCameraBehavior
- (BOOL)isPitchIncreasing;
- (id)positionClampedToCameraRestriction:delta:;
- (void)updatePitch:translation:;
- (void)updateZoom:oldFactor:newFactor:;
- (void).cxx_destruct;
- (id)positionClampedToCameraRestriction:;
- (void)beginPitch:;
- (void)updatePitch:degrees:;
- (void)updatePan:lastScreenPoint:;
- (void)updateRotate:atScreenPoint:;
@end
