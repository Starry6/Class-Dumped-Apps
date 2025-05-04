@interface AWENowPlayingInfoCenter : NSObject
@property (nonatomic) <AWENowPlayingInfoPlayerProtocol> playingPlayer;
@property (nonatomic) BOOL remoteCommandTargetSelf;
- (void)refreshNowPlayingInfo;
- (void)refreshRemoteCommandEnable;
- (void)becomePlayingPlayer:;
- (void)resignPlayingPlayer:;
- (id)playingPlayer;
- (void)setPlayingPlayer:;
- (void)addRemoteCommandTarget;
- (void)removeRemoteCommandTarget;
- (BOOL)remoteCommandTargetSelf;
- (void)setRemoteCommandTargetSelf:;
- (long long)handlePlayCommand;
- (long long)handlePauseCommand;
- (long long)handlePlayNextCommand;
- (long long)handleChangePlaybackPositionCommand:;
- (long long)handleSkipForwardCommand:;
- (long long)handleSkipBackwardCommand:;
- (void)setNowPlayingInfo:;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (long long)handlePreviousCommand;
+ (id)defaultCenter;
@end
