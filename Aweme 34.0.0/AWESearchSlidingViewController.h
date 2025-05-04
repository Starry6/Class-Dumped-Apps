@interface AWESearchSlidingViewController : AWESlidingViewController
@property (nonatomic) BOOL enablePagePanBackGesture;
@property (nonatomic) double panBackGestureLeftEdge;
- (id)initWithSelectedIndex:;
- (Class)scrollViewClass;
- (BOOL)enablePagePanBackGesture;
- (double)panBackGestureLeftEdge;
- (void)setEnablePagePanBackGesture:;
- (void)setPanBackGestureLeftEdge:;
- (id)slidingScrollView;
- (void)viewDidLoad;
@end
