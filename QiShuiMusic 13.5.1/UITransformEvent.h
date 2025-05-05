@interface UITransformEvent : UIEvent
@property (nonatomic) Q phase;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) {CGPoint=dd} translation;
@property (nonatomic) {CGAffineTransform=dddddd} transform;
- (void)_setHIDEvent:;
- (long long)subtype;
- (unsigned long long)phase;
- (void)_reset;
- (id)_windows;
- (id)_windowServerHitTestWindow;
- (void)_removeGestureRecognizersFromWindows;
- (id)transform;
- (long long)type;
- (id)locationInView:;
- (BOOL)_sendEventToGestureRecognizer:;
- (void).cxx_destruct;
- (id)_initWithEvent:touches:;
- (void)_removeGestureRecognizer:;
- (id)translation;
- (id)_init;
- (double)rotation;
- (double)scale;
- (id)_gestureRecognizersForWindow:;
- (long long)weightedDominantComponentForScaleWeight:rotationWeight:translationWeight:;
@end
