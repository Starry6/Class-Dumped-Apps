@interface AWEDetailShimmerContainerView : UIView
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) AWEDetailShimmerView shimmerView;
- (id)shimmerView;
- (void)setShimmerView:;
- (void)updateToModel:;
- (id)initWithFrame:serviceProvider:;
- (void)dealloc;
- (void)setProvider:;
- (void).cxx_destruct;
- (id)provider;
- (void)setupUI;
@end
