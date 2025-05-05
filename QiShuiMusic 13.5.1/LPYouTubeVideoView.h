@interface LPYouTubeVideoView : LPVideoView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)volume;
- (void)setVolume:;
- (void)setPlaying:;
- (void)setMuted:;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (id)initWithHost:video:style:posterFrame:posterFrameStyle:configuration:;
- (BOOL)usesSharedAudioSession;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (id)createVideoPlayerView;
- (void)setAllowsUserInteractionWithVideoPlayer:;
- (void)youTubePlayer:didChangeToState:;
- (void)youTubePlayer:didReceiveError:;
- (void)youTubePlayer:didChangeToFullScreen:;
- (void)enterCustomFullScreen;
@end
