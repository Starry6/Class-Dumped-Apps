@interface MPMoviePlayerController : NSObject
@property (nonatomic) AVPlayerViewController playerViewController;
@property (nonatomic) UIViewController hostingViewController;
@property (nonatomic) NSURL contentURL;
@property (nonatomic) UIView view;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) q playbackState;
@property (nonatomic) Q loadState;
@property (nonatomic) q controlStyle;
@property (nonatomic) q repeatMode;
@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic) BOOL fullscreen;
@property (nonatomic) q scalingMode;
@property (nonatomic) BOOL readyForDisplay;
@property (nonatomic) Q movieMediaTypes;
@property (nonatomic) q movieSourceType;
@property (nonatomic) double duration;
@property (nonatomic) double playableDuration;
@property (nonatomic) {CGSize=dd} naturalSize;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic) BOOL allowsAirPlay;
@property (nonatomic) BOOL airPlayVideoActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;
- (id)playerViewController;
- (id)backgroundView;
- (void)setFullscreen:;
- (id)init;
- (id)naturalSize;
- (void)dealloc;
- (void)setCurrentPlaybackTime:;
- (void)setRepeatMode:;
- (long long)playbackState;
- (unsigned long long)loadState;
- (void)play;
- (double)currentPlaybackTime;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)contentURL;
- (id)view;
- (long long)repeatMode;
- (void).cxx_destruct;
- (id)hostingViewController;
- (void)pause;
- (BOOL)isFullscreen;
- (void)setHostingViewController:;
- (double)duration;
- (long long)controlStyle;
- (void)setContentURL:;
- (void)prepareToPlay;
- (void)playerViewController:willBeginFullScreenPresentationWithAnimationCoordinator:;
- (void)playerViewController:willEndFullScreenPresentationWithAnimationCoordinator:;
- (long long)scalingMode;
- (void)setScalingMode:;
- (BOOL)readyForDisplay;
- (BOOL)isAirPlayVideoActive;
- (id)timedMetadata;
- (id)accessLog;
- (id)errorLog;
- (void)_avPlayerItemDidPlayToEndNotification:;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (BOOL)isPreparedToPlay;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackRate:;
- (id)initWithContentURL:;
- (void)setControlStyle:;
- (void)setShouldAutoplay:;
- (void)setFullscreen:animated:;
- (unsigned long long)movieMediaTypes;
- (double)playableDuration;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:;
- (BOOL)allowsAirPlay;
- (void)setAllowsAirPlay:;
- (id)thumbnailImageAtTime:timeOption:;
- (void)requestThumbnailImagesAtTimes:timeOption:;
- (void)cancelAllThumbnailImageRequests;
- (BOOL)useApplicationAudioSession;
- (void)setUseApplicationAudioSession:;
- (id)_advertisementView;
- (id)_videoViewController;
- (long long)movieSourceType;
- (void)setMovieSourceType:;
- (BOOL)shouldAutoplay;
@end
