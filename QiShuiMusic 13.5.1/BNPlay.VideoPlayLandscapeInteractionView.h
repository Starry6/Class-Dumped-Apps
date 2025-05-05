@interface BNPlay.VideoPlayLandscapeInteractionView : UIView
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)onPanWithGesture:;
- (void)onTapWithGesture:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
