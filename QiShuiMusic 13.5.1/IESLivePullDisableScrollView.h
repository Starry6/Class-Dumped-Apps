@interface IESLivePullDisableScrollView : UIScrollView
@property (nonatomic) <IESLiveScrollViewGestureDelegate> gestureDelegate;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)gestureDelegate;
- (void)setGestureDelegate:;
@end
