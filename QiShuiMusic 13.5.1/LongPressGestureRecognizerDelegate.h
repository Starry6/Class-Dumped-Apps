@interface LongPressGestureRecognizerDelegate : CustomGestureRecognizerDelegate
@property (nonatomic) BOOL disableLongpressAfterScroll;
- (void)setDisableLongpressAfterScroll:;
- (BOOL)disableLongpressAfterScroll;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (id)initWithEventHandler:;
@end
