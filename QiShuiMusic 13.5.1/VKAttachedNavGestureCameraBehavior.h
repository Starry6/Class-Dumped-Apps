@interface VKAttachedNavGestureCameraBehavior : VKGestureCameraBehavior
- (void)dealloc;
- (void)tapZoom:levels:completionHandler:;
- (void)beginZoom:;
- (void)updatePitch:translation:;
- (void)updateZoom:oldFactor:newFactor:;
- (void).cxx_destruct;
- (void)updatePitch:degrees:;
- (void)updatePan:lastScreenPoint:;
- (void)updateRotate:atScreenPoint:;
- (id)initWithNavCameraController:;
- (void)_startZoomAnimationFrom:to:completionHandler:;
@end
