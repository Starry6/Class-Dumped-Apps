@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer
@property (nonatomic) NSMapTable _touches;
@property (nonatomic) <PKTextInputTouchDetectionGestureRecognizerDelegate> delegate;
- (id)init;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (BOOL)canPreventGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (BOOL)shouldRequireFailureOfGestureRecognizer:;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)_touches;
- (void)recognizeTouch;
- (void)recognizeTouch:afterThreshold:;
- (void)set_touches:;
@end
