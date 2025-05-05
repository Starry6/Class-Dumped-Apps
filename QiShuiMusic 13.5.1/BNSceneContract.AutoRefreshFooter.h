@interface BNSceneContract.AutoRefreshFooter : MJRefreshAutoFooter
@property (nonatomic) q state;
- (void)resetNoMoreData;
- (void)animateEndRefreshingWithHasMore:completion:;
- (void)endRefreshingWithHasMore:;
- (void)endRefreshingWithNoMoreData;
- (void)placeSubviews;
- (void)setState:;
- (void)prepare;
- (id)initWithCoder:;
- (void)beginRefreshing;
- (id)initWithFrame:;
- (long long)state;
- (void).cxx_destruct;
@end
