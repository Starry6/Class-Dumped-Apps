@interface IESECRefreshTrailer : MJRefreshComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) double lastRightDelta;
- (void)scrollViewContentSizeDidChange:;
- (double)happenOffsetX;
- (double)lastRightDelta;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)setLastRightDelta:;
- (double)widthForContentBreakView;
- (id)contentView;
- (void)setState:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)willMoveToSuperview:;
+ (id)trailerWithRefreshingBlock:;
@end
