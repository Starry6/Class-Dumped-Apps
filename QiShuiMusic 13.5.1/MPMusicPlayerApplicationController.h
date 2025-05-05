@interface MPMusicPlayerApplicationController : MPMusicPlayerController
@property (nonatomic) NSXPCConnection serviceConnection;
- (void)_clearConnection;
- (id)serviceConnection;
- (void)dealloc;
- (void)setRelativeVolume:;
- (void)prerollWithCompletion:;
- (void).cxx_destruct;
- (void)beginPlaybackAtHostTime:;
- (void)setDisableAutomaticCanBeNowPlaying:;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_establishConnectionIfNeeded;
- (void)performQueueTransaction:completionHandler:;
- (id)_mediaItemsForContentItemIDs:;
- (void)onApplicationServerAsync:errorHandler:;
- (void)onApplicationServer:;
+ (BOOL)shouldUseSystemMusicAppOnMacOS;
+ (void)setShouldUseSystemMusicAppOnMacOS:;
@end
