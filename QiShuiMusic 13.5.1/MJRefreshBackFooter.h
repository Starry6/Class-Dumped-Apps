@interface MJRefreshBackFooter : MJRefreshFooter
@property (nonatomic) q lastRefreshCount;
@property (nonatomic) double lastBottomDelta;
- (double)lastBottomDelta;
- (void)scrollViewContentSizeDidChange:;
- (double)happenOffsetY;
- (double)heightForContentBreakView;
- (long long)lastRefreshCount;
- (void)scrollViewContentOffsetDidChange:;
- (void)setLastBottomDelta:;
- (void)setLastRefreshCount:;
- (void)setState:;
- (void)willMoveToSuperview:;
@end
