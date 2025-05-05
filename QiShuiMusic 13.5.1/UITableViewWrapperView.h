@interface UITableViewWrapperView : UIScrollView
@property (nonatomic) NSArray stuckToBackViews;
- (void)dealloc;
- (void)willRemoveSubview:;
- (void)touchesBegan:withEvent:;
- (BOOL)pointInside:withEvent:;
- (void)_addSubview:positioned:relativeTo:;
- (id)hitTest:withEvent:;
- (void)_unstickView:;
- (id)initWithFrame:;
- (id)stuckToBackViews;
- (void)setBounds:;
- (void).cxx_destruct;
- (unsigned long long)_focusPrimaryScrollableAxis;
- (void)touchesMoved:withEvent:;
- (BOOL)_forwardsToParentScroller;
- (void)touchesEnded:withEvent:;
- (void)_stickViewToBack:;
- (void)sendSubviewToBack:;
- (void)bringSubviewToFront:;
- (void)touchesCancelled:withEvent:;
@end
