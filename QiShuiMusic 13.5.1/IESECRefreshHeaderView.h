@interface IESECRefreshHeaderView : MJRefreshHeader
@property (nonatomic) UIView idleView;
@property (nonatomic) UIView refreshView;
@property (nonatomic) Q type;
@property (nonatomic) BOOL needRefreshOffset;
- (void)setRefreshView:;
- (id)idleView;
- (BOOL)needRefreshOffset;
- (id)refreshView;
- (void)scrollViewContentOffsetDidChange:;
- (void)setIdleView:;
- (void)setNeedRefreshOffset:;
- (void)layoutSubviews;
- (void)setState:;
- (void)setType:;
- (void)prepare;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)headerWithRefreshingBlock:type:;
+ (void)setLoadingType:;
+ (id)headerWithRefreshingBlock:;
+ (unsigned long long)loadingType;
@end
