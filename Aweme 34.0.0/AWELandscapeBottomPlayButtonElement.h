@interface AWELandscapeBottomPlayButtonElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIButton playButton;
@property (nonatomic) UIView screencastLoadingView;
@property (nonatomic) BOOL isScreenCastLoading;
@property (nonatomic) BOOL isInScreenCast;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)showScreenCastView:showFeedBack:;
- (void)showScreenCastViewWithConnecting:;
- (void)updateScreenCastPlayStatus:;
- (void)updateScreenCastProgress;
- (BOOL)isInScreenCast;
- (void)updatePlayStateWithPlaying:;
- (void)setIsInScreenCast:;
- (BOOL)isScreenCastLoading;
- (id)screencastLoadingView;
- (id)screenCastLoadingAnimation;
- (void)setIsScreenCastLoading:;
- (void)handlePlayButtonClicked;
- (void)setScreencastLoadingView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)playButton;
- (void)setPlayButton:;
@end
