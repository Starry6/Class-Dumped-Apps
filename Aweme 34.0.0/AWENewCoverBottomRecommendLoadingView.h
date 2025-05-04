@interface AWENewCoverBottomRecommendLoadingView : UIView
@property (nonatomic) UIView fakeView;
@property (nonatomic) AWEShimmerView shimmerView;
- (id)shimmerView;
- (void)setShimmerView:;
- (void)setFakeView:;
- (id)fakeView;
- (void)stopWithCompletion:animated:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)start;
- (void)setupUI;
@end
