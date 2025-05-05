@interface IESECMallFullScreenRefreshHeaderView : MJRefreshHeader
@property (nonatomic) UIView refreshView;
- (void)setRefreshView:;
- (id)refreshView;
- (void)layoutSubviews;
- (void)setState:;
- (void)prepare;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
+ (id)headerWithRefreshingBlock:;
@end
