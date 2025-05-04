@interface AWEMVChannelPlayerCardLoadingController : AWEMVChannelPlayerCardBaseController
@property (nonatomic) UIImageView loadingView;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)loadingAnimation;
- (void)player:willLoading:;
- (void)updateState:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
@end
