@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer
@property (nonatomic) <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;
- (id)tapDelayDelegate;
- (void)setTapDelayDelegate:;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
@end
