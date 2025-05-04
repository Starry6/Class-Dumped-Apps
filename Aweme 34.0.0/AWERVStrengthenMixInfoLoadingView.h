@interface AWERVStrengthenMixInfoLoadingView : UIView
@property (nonatomic) UIView fakeView;
@property (nonatomic) AWEShimmerView shimmerView;
@property (nonatomic) AWERVDetailPageContext pageContext;
- (id)shimmerView;
- (void)setShimmerView:;
- (void)setFakeView:;
- (id)fakeView;
- (id)initWithFrame:pageContext:;
- (void)stopWithCompletion:animated:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)start;
- (void)setupUI;
- (void)setPageContext:;
- (id)pageContext;
@end
