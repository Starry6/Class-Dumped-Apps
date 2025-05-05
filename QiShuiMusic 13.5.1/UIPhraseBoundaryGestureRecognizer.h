@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer
@property (nonatomic) UIResponder<UITextInput> textInput;
@property (nonatomic) double secondDelay;
@property (nonatomic) BOOL secondDelayElapsed;
@property (nonatomic) @ userData;
- (void)clearTimer;
- (void)setState:;
- (void)startTimer;
- (void)setUserData:;
- (void).cxx_destruct;
- (id)userData;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:action:;
- (void)secondDelayElapsed:;
- (id)textInput;
- (void)setTextInput:;
- (double)secondDelay;
- (void)setSecondDelay:;
- (BOOL)secondDelayElapsed;
@end
