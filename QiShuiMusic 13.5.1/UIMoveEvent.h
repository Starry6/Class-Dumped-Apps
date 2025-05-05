@interface UIMoveEvent : UIEvent
@property (nonatomic) q _moveDirection;
@property (nonatomic) Q _focusHeading;
- (long long)type;
- (void)_sendEventToResponder:;
- (unsigned long long)_focusHeading;
- (long long)_moveDirection;
- (void)_setMoveDirection:;
- (void)_setFocusHeading:;
@end
