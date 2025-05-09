@interface AWEFeedPiPPlayerContainer : UIView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) AWEBinding videoControllerBinding;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) UIView playerView;
@property (nonatomic) UIView placeholderView;
@property (nonatomic) UIView playerInteractionView;
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> videoController;
@property (nonatomic) double progress;
- (id)aAWEPadModuleAdapter;
- (void)playLoadingAnimation;
- (void)setupVideoBind;
- (id)videoControllerBinding;
- (void)setVideoControllerBinding:;
- (void)checkBlackScreen;
- (id)playerInteractionView;
- (void)setPlayerInteractionView:;
- (void)setPlaceholderView:;
- (BOOL)isLoading;
- (BOOL)isPlaying;
- (id)placeholderView;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (double)progress;
- (id)loadingView;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIsLoading:;
- (void)setIsPlaying:;
- (void)setProgress:;
- (void)setupView;
- (id)videoController;
- (void)setVideoController:;
- (void)stopLoadingAnimation;
+ (Class)aAWEPadModuleAdapterClass;
@end
