@interface BDXLynxVideoProFullScreen : UIViewController
@property (nonatomic) NSString imageURL;
@property (nonatomic) UIView playerView;
@property (nonatomic) Q restoreOrientation;
@property (nonatomic) @? dismissBlk;
- (id)dismissBlk;
- (id)initWithPlayerView:dismiss:;
- (unsigned long long)restoreOrientation;
- (void)setDismissBlk:;
- (void)setRestoreOrientation:;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)dismiss;
- (void)setPlayerView:;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (id)playerView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setImageURL:;
- (void)viewDidLayoutSubviews;
- (id)imageURL;
- (void)viewDidLoad;
- (void)show:;
- (void)setupUI;
@end
