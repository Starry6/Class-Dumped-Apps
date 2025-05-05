@interface AWEVideoPlayerView : UIView
@property (nonatomic) AVPlayerLayer playerLayer;
@property (nonatomic) BOOL initialized;
@property (nonatomic) AWEVideoPlayerController playerController;
- (void)setPlayer:scaleMode:rotateType:;
- (void)setRotateType:;
- (BOOL)initialized;
- (void)setInitialized:;
- (id)playerLayer;
- (void)dealloc;
- (void)layoutSubviews;
- (id)playerController;
- (void)setPlayerLayer:;
- (id)initWithFrame:;
- (void)setPlayerController:;
- (void).cxx_destruct;
- (void)setScalingMode:;
- (void)resetPlayer;
@end
