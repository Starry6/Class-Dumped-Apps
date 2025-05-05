@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer
@property (nonatomic) UIScrollView scrollView;
- (void)enoughTimeElapsed:;
- (void)setScrollView:;
- (void)clearTimer;
- (void)dealloc;
- (void)touchesBegan:withEvent:;
- (id)scrollView;
- (void)_processNewLocation:;
- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
+ (BOOL)_shouldDefaultToTouches;
@end
