@interface IESIMRefreshHeader : MJRefreshHeader
@property (nonatomic) IESIMUILoadingView loading;
@property (nonatomic) UIView parentView;
@property (nonatomic) {CGPoint=dd} position;
- (void)scrollViewContentSizeDidChange:;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewPanStateDidChange:;
- (void)setPullingPercent:;
- (void)setPosition:;
- (void)setLoading:;
- (id)position;
- (void)setState:;
- (id)loading;
- (void)prepare;
- (void).cxx_destruct;
- (id)parentView;
- (void)setParentView:;
+ (id)headerWithRefreshingBlock:backgroundColor:;
+ (id)headerWithRefreshingBlock:backgroundColor:parentView:position:;
@end
