@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
@property (nonatomic) UIScrollView scrollView;
- (void)setScrollView:;
- (void)touchesBegan:withEvent:;
- (void)_transformChangedWithEvent:;
- (void)setDelegate:;
- (BOOL)_analyticsIsGestureHandled;
- (id)scrollView;
- (void)removeTarget:action:;
- (double)_hysteresis;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (id)initWithTarget:action:;
@end
