@interface BNSceneContract.RefreshHeader : MJRefreshHeader
@property (nonatomic) q state;
@property (nonatomic) double pullingPercent;
- (void)placeSubviews;
- (double)pullingPercent;
- (void)setPullingPercent:;
- (void)setState:;
- (void)prepare;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (long long)state;
- (void).cxx_destruct;
@end
