@interface AWELiveShelfHeaderLoadingView : MJRefreshHeader
@property (nonatomic) DUXLoadingParticleView loading;
@property (nonatomic) UIView parentView;
@property (nonatomic) {CGPoint=dd} position;
@property (nonatomic) BOOL disableLoadingLayoutAnimation;
- (void)placeSubviews;
- (void)setDisableLoadingLayoutAnimation:;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewPanStateDidChange:;
- (void)scrollViewContentSizeDidChange:;
- (void)setPullingPercent:;
- (BOOL)disableLoadingLayoutAnimation;
- (id)position;
- (void)prepare;
- (void).cxx_destruct;
- (id)loading;
- (void)setPosition:;
- (void)setState:;
- (void)setLoading:;
- (id)parentView;
- (void)setParentView:;
+ (id)headerWithRefreshingBlock:backgroundColor:;
+ (id)headerWithRefreshingBlock:backgroundColor:parentView:position:;
@end
