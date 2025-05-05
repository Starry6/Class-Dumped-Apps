@interface AVHomeIPCameraPlayerController : AVPlayerController
@property (nonatomic) <AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) {CGSize=dd} presentationSize;
@property (nonatomic) BOOL muted;
- (double)volume;
- (BOOL)isPlaying;
- (BOOL)hasEnabledVideo;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)hasLiveStreamingContent;
- (id)presentationSize;
- (void)setPresentationSize:;
- (void)setVolume:;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:;
- (void)setDelegate:;
- (BOOL)hasContent;
- (long long)timeControlStatus;
- (void)togglePlaybackEvenWhenInBackground:;
- (void)setMuted:;
- (BOOL)isMuted;
- (id)delegate;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isPictureInPicturePossible;
@end
