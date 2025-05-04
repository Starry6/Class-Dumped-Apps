@interface AWESearchAIGCComponent : AWESearchCachalotComponent
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) <CachalotComponent> bridgeComponent;
@property (nonatomic) AWESearchAIGCCardContainerView containerView;
@property (nonatomic) UIView separateView;
- (BOOL)sendEvent:params:;
- (void)setSeparateView:;
- (id)separateView;
- (void)componentPageViewDidAppear:;
- (void)componentPageViewWillDisappear:;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (id)bridgeComponent;
- (void)setBridgeComponent:;
- (BOOL)lynxUpdateData:processorName:;
- (id)initWithView:viewModel:;
- (BOOL)updateLynxContainerWidth:;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:;
- (void)showError;
+ (BOOL)enableFixLynxActive;
@end
