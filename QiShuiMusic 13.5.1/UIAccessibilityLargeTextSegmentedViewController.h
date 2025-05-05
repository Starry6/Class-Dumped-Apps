@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController
@property (nonatomic) UISegment originalSelectedSegment;
@property (nonatomic) NSArray segments;
@property (nonatomic) UIScrollView mainScrollView;
@property (nonatomic) UISegmentedControl segmentedControl;
@property (nonatomic) NSMutableArray segmentButtons;
- (id)segments;
- (BOOL)_canShowWhileLocked;
- (void)setSegments:;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_orientationChanged:;
- (void)buttonPress:;
- (void)buttonTouchDown:;
- (void)buttonTouchUp:;
- (id)segmentFromSegment:;
- (id)initWithSegmentedControl:segments:delegate:;
- (void)_configureSegmentViews;
- (id)segmentedControl;
- (void)setSegmentedControl:;
- (id)segmentButtons;
- (void)setSegmentButtons:;
- (id)originalSelectedSegment;
- (void)setOriginalSelectedSegment:;
- (id)mainScrollView;
- (void)setMainScrollView:;
@end
