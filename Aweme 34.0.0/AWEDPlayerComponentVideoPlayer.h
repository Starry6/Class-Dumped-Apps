@interface AWEDPlayerComponentVideoPlayer : AWEDPlayerBaseComponent
@property (nonatomic) BOOL skipDouPlusToastRemove;
@property (nonatomic) BOOL alreadyRecordPlayCompletion;
@property (nonatomic) BOOL isPlayFailedShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:playbackFailedWithError:;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)playerWillLoopPlaying:;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (void)updatePlayerController:withPlayVideoVC:;
- (void)screenCapturedDidChange:;
- (BOOL)shouldPauseWhenPlayerStartPlay:;
- (BOOL)audioIsPlaying;
- (void)audioPause;
- (BOOL)isPlayFailedShown;
- (void)setIsPlayFailedShown:;
- (void)commentSearchMusicDidStartPlay;
- (BOOL)isPaidMixScreenRecording;
- (BOOL)enableFeedDuplicateFilterLog;
- (void)playerTimerRegisterWithNotification:;
- (void)startFollowFeedAlbumVideoPlayEndObserve;
- (void)trackVideoInfoWhenEnterBackground;
- (void)updatePrerenderConfiguration;
- (BOOL)skipDouPlusToastRemove;
- (void)trackRecordClearScreenTime;
- (void)setSkipDouPlusToastRemove:;
- (void)trackReportClearScreenTime;
- (void)handlePlayerWillLoopInBackground;
- (BOOL)alreadyRecordPlayCompletion;
- (void)setAlreadyRecordPlayCompletion:;
- (void)trackAntiVideoLoadSuccess:withModel:errorCode:;
- (BOOL)shouldDenyFailureToast;
- (void)handlePlayerDidChangePlaybackStateWithAction:;
- (void)insertPlayerViewIfNeeded;
- (void)setModel:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (BOOL)play:;
- (void)applicationDidEnterBackground;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (void)viewDidDisappear:;
- (void)applicationWillTerminate;
- (void)viewDidAppear:;
- (BOOL)pause;
- (void)addObservers;
- (BOOL)pauseIfPlaying;
@end
