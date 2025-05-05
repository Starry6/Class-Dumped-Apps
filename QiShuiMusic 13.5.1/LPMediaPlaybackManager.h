@interface LPMediaPlaybackManager : NSObject
- (id)init;
- (void)_updateAudioSessionCategory;
- (void).cxx_destruct;
- (void)volumeChanged:;
- (id)audioSession;
- (void)addMediaPlayer:;
- (void)removeMediaPlayer:;
- (void)mediaPlayer:didChangePlayingState:;
- (void)mediaPlayer:didChangeMutedState:;
- (void)_deactivateAllPlayingMediaPlayersExcept:;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (BOOL)_sharedSessionHasPlayingAudio;
+ (id)shared;
@end
