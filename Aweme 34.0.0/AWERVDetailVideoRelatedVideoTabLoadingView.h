@interface AWERVDetailVideoRelatedVideoTabLoadingView : UIView
@property (nonatomic) UIView fakeView;
@property (nonatomic) AWEShimmerView shimmerView;
@property (nonatomic) AWEGradientView loadSubGradientView;
@property (nonatomic) AWERVDetailPageContext pageContext;
- (id)shimmerView;
- (void)setShimmerView:;
- (void)setFakeView:;
- (id)fakeView;
- (void)setupUIIfNeeded;
- (void)stopWithCompletion:animated:;
- (id)loadSubGradientView;
- (void)setLoadSubGradientView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)start;
- (void)setPageContext:;
- (id)pageContext;
@end
