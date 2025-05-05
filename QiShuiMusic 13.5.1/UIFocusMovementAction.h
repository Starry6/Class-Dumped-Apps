@interface UIFocusMovementAction : BSAction
@property (nonatomic) _UIFocusMovementInfo focusMovementInfo;
@property (nonatomic) _UIFocusInputDeviceInfo inputDeviceInfo;
@property (nonatomic) BOOL shouldPerformHapticFeedback;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} focusedFrame;
- (BOOL)shouldPerformHapticFeedback;
- (id)inputDeviceInfo;
- (long long)UIActionType;
- (id)initWithFocusMovementInfo:;
- (id)initWithFocusMovementInfo:inputDeviceInfo:shouldPerformHapticFeedback:;
- (id)initWithFocusMovementInfo:inputDeviceInfo:shouldPerformHapticFeedback:focusedFrameInSceneCoordinateSpace:;
- (id)focusMovementInfo;
- (id)focusedFrame;
@end
