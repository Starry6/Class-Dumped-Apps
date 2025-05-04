@interface AWEVideoPlayerView : UIView
@property (nonatomic) AVPlayerLayer playerLayer;
@property (nonatomic) BOOL initialized;
@property (nonatomic) AWEVideoPlayerController playerController;
@property (nonatomic) BOOL shouldProhibitImplicitAnimationWhenLayoutSubviews;
- (void)setRotateType:;
- (void)setPlayer:scaleMode:rotateType:;
- (BOOL)shouldProhibitImplicitAnimationWhenLayoutSubviews;
- (void)setShouldProhibitImplicitAnimationWhenLayoutSubviews:;
- (id)playerLayer;
- (BOOL)initialized;
- (void)setInitialized:;
- (void)dealloc;
- (void)setPlayerController:;
- (id)initWithFrame:;
- (id)playerController;
- (void)setPlayerLayer:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setScalingMode:;
- (void)resetPlayer;
@end
