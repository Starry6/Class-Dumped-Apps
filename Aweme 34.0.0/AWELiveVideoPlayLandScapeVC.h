@interface AWELiveVideoPlayLandScapeVC : UIViewController
@property (nonatomic) <IESLiveOrientationConfig> orientationConfig;
@property (nonatomic) IESLiveVideoPlayer videoPlayer;
@property (nonatomic) UIView videoPlayView;
@property (nonatomic) UIView playView;
@property (nonatomic) UIView backgroundContainer;
@property (nonatomic) UIImageView pauseImageView;
@property (nonatomic) NSDictionary attrs;
- (void)videoPause;
- (void)trackClick;
- (id)pauseImageView;
- (void)setPauseImageView:;
- (void)setVideoPlayView:;
- (void)forceUpdateTopPortrait;
- (id)videoPlayView;
- (id)orientationConfig;
- (id)initWithVideoPlayer:videoPlayView:attrs:;
- (void)setOrientationConfig:;
- (id)videoPlayer;
- (void)setVideoPlayer:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setBackgroundContainer:;
- (id)backgroundContainer;
- (id)playView;
- (void)setPlayView:;
- (id)attrs;
- (void)setAttrs:;
@end
