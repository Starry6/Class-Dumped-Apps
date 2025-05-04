@interface AWESearchVideoDeconstructComponent : AWESearchCachalotComponent
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) UIView separateView;
- (void)setSeparateView:;
- (id)separateView;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (id)cellController;
- (id)initWithView:viewModel:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
