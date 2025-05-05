@interface ISLiveWallpaperUIView : ISBasePlayerUIView
@property (nonatomic) BOOL touching;
@property (nonatomic) double force;
@property (nonatomic) NSTimer updateTimer;
@property (nonatomic) ISLiveWallpaperPlayer player;
@property (nonatomic) UIGestureRecognizer playbackGestureRecognizer;
- (void)setUpdateTimer:;
- (id)updateTimer;
- (void)dealloc;
- (double)force;
- (void)setForce:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)_handlePlaybackRecognizer:;
- (void).cxx_destruct;
- (void)willMoveToWindow:;
- (id)playbackGestureRecognizer;
- (BOOL)touching;
- (void)setTouching:;
- (void)_updatePlayer;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (void)_handleUpdateTimer;
@end
