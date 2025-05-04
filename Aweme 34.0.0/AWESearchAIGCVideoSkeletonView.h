@interface AWESearchAIGCVideoSkeletonView : AWESearchCachalotBaseCardView
@property (nonatomic) UIImageView skeletonImageView;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) NSTimer timeoutTimer;
- (void)componentWillDisplay;
- (id)skeletonImageView;
- (void)setSkeletonImageView:;
- (void)removeSkeletonView;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)timeoutTimer;
- (id)componentView;
- (void)setTimeoutTimer:;
- (void)updateWithViewModel:;
- (void)createUI;
+ (id)sizeWithViewModel:width:;
@end
