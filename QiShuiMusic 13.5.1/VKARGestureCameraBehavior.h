@interface VKARGestureCameraBehavior : VKGestureCameraBehavior
- (void)beginPan:;
- (void)updateZoom:oldFactor:newFactor:;
- (void).cxx_destruct;
- (void)updatePan:lastScreenPoint:;
- (id).cxx_construct;
- (void)updateRotate:atScreenPoint:;
- (id)initWithARCameraController:;
@end
