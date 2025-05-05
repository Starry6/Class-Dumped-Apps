@interface IESIMRefreshFooter : MJRefreshFooter
@property (nonatomic) BOOL newPanGesture;
@property (nonatomic) BOOL needBounces;
@property (nonatomic) BOOL forbidTriggerLoadMore;
@property (nonatomic) BOOL triggerAtTracking;
- (void)setNeedBounces:;
- (void)scrollViewContentSizeDidChange:;
- (void)_resetScrollViewInsetBottomAnimated:completion:;
- (void)_updateScrollViewInsetBottomAnimated:completion:;
- (void)endRefreshingWithNoMoreDataCompletionBlock:;
- (BOOL)forbidTriggerLoadMore;
- (BOOL)needBounces;
- (BOOL)newPanGesture;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (void)scrollViewContentOffsetDidChange:;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)scrollViewPanStateDidChange:;
- (void)setForbidTriggerLoadMore:;
- (void)setHiddenAndUpdateLayout:;
- (void)setNewPanGesture:;
- (void)setTriggerAtTracking:;
- (BOOL)triggerAtTracking;
- (void)setState:;
- (void)willMoveToSuperview:;
@end
