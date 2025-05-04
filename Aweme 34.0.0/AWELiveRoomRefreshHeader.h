@interface AWELiveRoomRefreshHeader : MJRefreshHeader
@property (nonatomic) UILabel readyLabel;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) AWEUILoadingView loadingView;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewPanStateDidChange:;
- (void)scrollViewContentSizeDidChange:;
- (void)setPullingPercent:;
- (id)readyLabel;
- (void)setReadyLabel:;
- (void)setLoadingView:;
- (void)prepare;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setState:;
- (id)loadingLabel;
- (void)setLoadingLabel:;
@end
