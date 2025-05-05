@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior
- (void)dealloc;
- (void)tapZoom:levels:completionHandler:;
- (void)updatePitch:translation:;
- (void)updateZoom:oldFactor:newFactor:;
- (void).cxx_destruct;
- (void)beginPitch:;
- (void)updatePitch:degrees:;
- (void)updatePan:lastScreenPoint:;
- (id).cxx_construct;
- (void)updateRotate:atScreenPoint:;
- (id)initWithNavCameraController:;
@end
