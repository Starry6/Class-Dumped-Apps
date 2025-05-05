@interface LPMediaRemotePlaybackObserver : NSObject
- (void)removeClient:;
- (void)addClient:;
- (BOOL)isPlaying;
- (double)minimumUpdateInterval;
- (void).cxx_destruct;
- (void)updatePlaybackState;
- (void)dispatchPlayingItemDidChangeToAllClients;
- (double)elapsedFractionForPlaybackInformation:;
- (BOOL)playbackInformationMatchesPlayingItem:;
+ (id)shared;
@end
