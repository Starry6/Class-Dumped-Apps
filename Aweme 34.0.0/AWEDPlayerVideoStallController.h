@interface AWEDPlayerVideoStallController : AWEDPlayerInteractionBaseController
@property (nonatomic) UIImageView loadingView;
@property (nonatomic) AWELoadingAndVolumeView loadingAndVolumeView;
- (unsigned long long)activateType;
- (void)playLoadingAnimation;
- (void)iesPlayer:willInStallAction:;
- (void)willRotateToFullScreen:;
- (void)updateDPlayerState:;
- (BOOL)useCircleStyleLoading;
- (id)loadingAndVolumeView;
- (void)switchLoadingModel:;
- (id)loadingAnimation;
- (void)setLoadingAndVolumeView:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
@end
