@interface AWEAudioFocusManager : NSObject
@property (nonatomic) NSPointerArray listeners;
@property (nonatomic) NSLock lock;
- (void)removeRemoteControlCommand;
- (id)convertType:;
- (void)startPlay:;
- (void)stopPlay:;
- (id)listeners;
- (id)init;
- (BOOL)isPlaying;
- (void)setLock:;
- (void)setListeners:;
- (id)lock;
- (void)setup;
- (void)removePlayer:;
- (void).cxx_destruct;
- (void)addPlayer:;
+ (void)startPlay:;
+ (void)stopPlay:;
+ (void)pauseAllAndRemoveRemoteControl;
+ (BOOL)isPlaying;
+ (id)sharedManager;
+ (void)removePlayer:;
+ (void)addPlayer:;
+ (void)pauseAll;
@end
