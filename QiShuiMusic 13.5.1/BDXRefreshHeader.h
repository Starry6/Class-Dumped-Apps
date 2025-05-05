@interface BDXRefreshHeader : MJRefreshHeader
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) <BDXRefreshDelegate> delegate;
@property (nonatomic) UIView headerView;
@property (nonatomic) : releasedAction;
@property (nonatomic) double preReboundPercent;
- (void)headerRebound;
- (double)preReboundPercent;
- (SEL)releasedAction;
- (void)scrollViewContentOffsetDidChange:;
- (void)setPreReboundPercent:;
- (void)setPullingPercent:;
- (void)setReleasedAction:;
- (void)withReleasedAction:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)setHeaderView:;
- (void)setDelegate:;
- (void)prepare;
- (id)headerView;
- (id)delegate;
- (void).cxx_destruct;
@end
