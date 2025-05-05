@interface VKARWalkingDebugGestureCameraBehavior : VKGestureCameraBehavior
- (void)updateZoom:oldFactor:newFactor:;
- (id)initWithCameraController:;
- (void).cxx_destruct;
- (void)updatePan:lastScreenPoint:;
- (void)updateRotate:atScreenPoint:;
@end
