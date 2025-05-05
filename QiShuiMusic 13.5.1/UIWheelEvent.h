@interface UIWheelEvent : UIEvent
- (void)_setHIDEvent:;
- (long long)subtype;
- (double)_wheelVelocity;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)_canHaveVelocity;
- (void)_sendEventToResponder:;
@end
