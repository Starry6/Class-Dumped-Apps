@interface TUCallSoundPlayer : NSObject
@property (nonatomic) TUSoundPlayer player;
@property (nonatomic) q currentlyPlayingSoundType;
@property (nonatomic) BOOL playing;
- (BOOL)attemptToPlayDescriptor:completion:;
- (id)init;
- (BOOL)isPlaying;
- (void)dealloc;
- (BOOL)attemptToPlayDescriptor:;
- (void)setCurrentlyPlayingSoundType:;
- (id)player;
- (BOOL)attemptToPlaySoundType:forCall:;
- (void).cxx_destruct;
- (void)setPlayer:;
- (BOOL)attemptToPlaySoundType:forCall:completion:;
- (long long)currentlyPlayingSoundType;
- (void)stopPlaying;
@end
