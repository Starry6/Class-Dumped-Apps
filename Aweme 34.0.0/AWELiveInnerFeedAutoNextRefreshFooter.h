@interface AWELiveInnerFeedAutoNextRefreshFooter : MJRefreshFooter
@property (nonatomic) q lastRefreshCount;
@property (nonatomic) double lastBottomDelta;
@property (nonatomic) double triggerPullPercent;
@property (nonatomic) double displayContentOffsetY;
@property (nonatomic) UILabel idleLabel;
@property (nonatomic) UILabel refreshingLabel;
@property (nonatomic) UILabel noMoreLabel;
@property (nonatomic) DUXLoadingParticleView loadingView;
- (void)endRefreshingWithNoMoreData;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewContentSizeDidChange:;
- (double)lastBottomDelta;
- (long long)lastRefreshCount;
- (void)setLastRefreshCount:;
- (void)setLastBottomDelta:;
- (void)setTriggerPullPercent:;
- (void)startLoadingAnim;
- (id)idleLabel;
- (id)refreshingLabel;
- (id)noMoreLabel;
- (id)createFooterLabel;
- (void)setRefreshingLabel:;
- (void)setIdleLabel:;
- (void)setNoMoreLabel:;
- (double)displayContentOffsetY;
- (double)p_happenOffsetY;
- (double)triggerPullPercent;
- (double)p_heightForContentBreakView;
- (void)stopLoadingAnim;
- (void)setDisplayContentOffsetY:;
- (BOOL)isDisplayRefreshing;
- (void)endDisplayRefreshing;
- (void)willMoveToSuperview:;
- (void)setLoadingView:;
- (void)prepare;
- (id)initWithFrame:;
- (void)applicationWillEnterForeground:;
- (id)loadingView;
- (void)setTitle:forState:;
- (void)endRefreshing;
- (void).cxx_destruct;
- (void)setState:;
- (void)p_addObservers;
@end
