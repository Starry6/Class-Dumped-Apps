@interface CSJRewardedVideoAdViewController : UIViewController
@property (nonatomic) CSJRewardFullScreenBaseVM viewModel;
@property (nonatomic) NSArray metas;
@property (nonatomic) <CSJVideoAdDelegate> rewardedVideoAd;
- (id)rewardedVideoAd;
- (id)initViewControllerWithAd:slot:materialMetas:;
- (id)metas;
- (void)setMetas:;
- (void)setRewardedVideoAd:;
- (void)switchToWebViewMute:;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)viewModel;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setViewModel:;
- (void)viewDidLoad;
- (void)openAppStore;
@end
