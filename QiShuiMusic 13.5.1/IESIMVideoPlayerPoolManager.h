@interface IESIMVideoPlayerPoolManager : NSObject
@property (nonatomic) NSPointerArray players;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMapTable playerStates;
@property (nonatomic) q playerLimit;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableIdleTimerByPlayerWrapper;
- (void)setPlayerLimit:;
- (BOOL)enableIdleTimerByPlayerWrapper;
- (long long)playerLimit;
- (BOOL)playerNotUsed:;
- (void)recordPlayer:playState:;
- (void)setEnableIdleTimerByPlayerWrapper:;
- (id)init;
- (void)enqueue:;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (BOOL)enabled;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)players;
- (void)setPlayers:;
- (id)playerStates;
- (void)setPlayerStates:;
- (void)dequeue:;
+ (id)sharedInstance;
@end
