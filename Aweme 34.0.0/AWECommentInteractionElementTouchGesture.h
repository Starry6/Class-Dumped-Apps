@interface AWECommentInteractionElementTouchGesture : UITapGestureRecognizer
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)addTouchGesture:touchBeginBlock:;
- (id)initWithTarget:action:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
@end
