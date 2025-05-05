@interface CJPayNoNetworkContainerView : UIView
@property (nonatomic) CJPayNoNetworkView defaultNoNetworkView;
@property (nonatomic) UIView configErrorView;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
- (id)configErrorView;
- (id)defaultNoNetworkView;
- (unsigned long long)p_errorViewStyleBy:;
- (void)setConfigErrorView:;
- (void)setDefaultNoNetworkView:;
- (void)showStyle:;
- (void)setEdgeInsets:;
- (id)edgeInsets;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
