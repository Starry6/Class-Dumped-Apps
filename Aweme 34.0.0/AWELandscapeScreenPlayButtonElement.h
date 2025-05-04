@interface AWELandscapeScreenPlayButtonElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIButton screenPlayButton;
@property (nonatomic) UIButton screenBackwardButton;
@property (nonatomic) UIButton screenForwardButton;
@property (nonatomic) UIImageView loadingView;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)didEnterLandscape;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)shouldReceiveGestureRecognizer:touch:;
- (void)bindEvents;
- (void)setupSwitchButtonWithModel:;
- (id)screenPlayButton;
- (id)screenBackwardButton;
- (id)screenForwardButton;
- (void)handleLoadingAnimation:;
- (void)handleClickScreenPlayButtonWithMethod:;
- (void)setScreenPlayButton:;
- (void)setScreenBackwardButton:;
- (void)setScreenForwardButton:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setData:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updatePlayState;
@end
