@interface AWERVHotVideoElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVHotVideoHorizontalScrollView horizontalScrollView;
@property (nonatomic) AWERVHotVideoVenationView venationView;
@property (nonatomic) MASConstraint heightConstraint;
@property (nonatomic) AWEHotVideoShimmerView shimmerView;
@property (nonatomic) AWERVHotVideoViewModel viewModel;
- (id)shimmerView;
- (void)setShimmerView:;
- (void)resetIfNeed;
- (void)refreshHotVideoData;
- (id)venationView;
- (double)getHorizontalScrollViewHeight;
- (double)getVenationViewHeight;
- (id)noNeedSimultaneouslyGestureView;
- (void)setVenationView:;
- (void)startLoading;
- (id)viewModel;
- (void)viewDidLoad;
- (void)stopLoading;
- (void)setData:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setHeightConstraint:;
- (id)heightConstraint;
- (id)horizontalScrollView;
- (void)setupUI;
- (void)setHorizontalScrollView:;
- (void)addObservers;
@end
