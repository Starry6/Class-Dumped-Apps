@interface AWELandscapeVideoStallController : AWELandscapeInteractionBaseController
@property (nonatomic) AWELoadingAndVolumeView loadingView;
- (void)playLoadingAnimation;
- (void)player:willInStallAction:;
- (void)switchLoadingModel:;
- (void)updateState:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
@end
