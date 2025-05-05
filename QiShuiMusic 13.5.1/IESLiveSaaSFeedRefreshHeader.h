@interface IESLiveSaaSFeedRefreshHeader : MJRefreshHeader
@property (nonatomic) @? paramsRefreshingBlock;
@property (nonatomic) NSDictionary refreshingParams;
@property (nonatomic) UIView<IESLiveSaaSRefreshView> loading;
@property (nonatomic) <IESLiveSaaSFeedViewFactory> feedFactory;
@property (nonatomic) NSDictionary params;
- (void)setFeedFactory:;
- (void)scrollViewContentSizeDidChange:;
- (void)beginRefreshingWithParams:;
- (id)feedFactory;
- (id)paramsRefreshingBlock;
- (void)placeSubviews;
- (id)refreshingParams;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewPanStateDidChange:;
- (void)setParamsRefreshingBlock:;
- (void)setPullingPercent:;
- (void)setRefreshingParams:;
- (void)setLoading:;
- (void)setState:;
- (id)loading;
- (void)prepare;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)headerWithRefreshingParamsBlock:;
@end
