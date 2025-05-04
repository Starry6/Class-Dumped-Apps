@interface AWELiveInnerFeedRefreshHeader : MJRefreshHeader
@property (nonatomic) UILabel readyLabel;
@property (nonatomic) UILabel refreshingLabel;
@property (nonatomic) AWEUILoadingView loadingView;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewPanStateDidChange:;
- (void)scrollViewContentSizeDidChange:;
- (void)setPullingPercent:;
- (id)refreshingLabel;
- (void)setRefreshingLabel:;
- (id)readyLabel;
- (void)setReadyLabel:;
- (void)setLoadingView:;
- (void)prepare;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setState:;
@end
