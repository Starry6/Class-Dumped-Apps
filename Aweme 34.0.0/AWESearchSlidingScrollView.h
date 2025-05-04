@interface AWESearchSlidingScrollView : AWESlidingScrollView
@property (nonatomic) BOOL enablePagePanBackGesture;
@property (nonatomic) double panBackGestureLeftEdge;
- (BOOL)edgePan:;
- (BOOL)enablePagePanBackGesture;
- (double)panBackGestureLeftEdge;
- (void)setEnablePagePanBackGesture:;
- (void)setPanBackGestureLeftEdge:;
- (id)initWithFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
@end
