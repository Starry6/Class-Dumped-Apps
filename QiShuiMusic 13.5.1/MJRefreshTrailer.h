@interface MJRefreshTrailer : MJRefreshComponent
@property (nonatomic) q lastRefreshCount;
@property (nonatomic) double lastRightDelta;
@property (nonatomic) double ignoredScrollViewContentInsetRight;
- (id)linkTo:;
- (void)scrollViewContentSizeDidChange:;
- (double)happenOffsetX;
- (double)ignoredScrollViewContentInsetRight;
- (long long)lastRefreshCount;
- (double)lastRightDelta;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)setIgnoredScrollViewContentInsetRight:;
- (void)setLastRefreshCount:;
- (void)setLastRightDelta:;
- (double)widthForContentBreakView;
- (void)setState:;
- (void)willMoveToSuperview:;
+ (id)trailerWithRefreshingBlock:;
+ (id)trailerWithRefreshingTarget:refreshingAction:;
@end
