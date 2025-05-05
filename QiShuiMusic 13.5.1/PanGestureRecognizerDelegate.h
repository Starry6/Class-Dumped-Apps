@interface PanGestureRecognizerDelegate : CustomGestureRecognizerDelegate
@property (nonatomic) NSArray gestures;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (id)gestures;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (id)initWithEventHandler:;
@end
