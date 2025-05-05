@interface TapGestureRecognizerDelegate : CustomGestureRecognizerDelegate
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
@end
