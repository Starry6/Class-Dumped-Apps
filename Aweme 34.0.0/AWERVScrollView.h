@interface AWERVScrollView : UIScrollView
@property (nonatomic) <AWERVScrollViewProtocol> simultaneouslyDelegate;
- (void)setSimultaneouslyDelegate:;
- (id)simultaneouslyDelegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
@end
