@interface AWEIMLaunchIOTrackerManager : HTSService
@property (nonatomic) BOOL isTracking;
@property (nonatomic) NSMutableDictionary targets;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwlock;
@property (nonatomic) BOOL isLowPowerMode;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q firstInterval;
@property (nonatomic) Q loopInterval;
@property (nonatomic) BOOL hasEnterMessageTab;
@property (nonatomic) BOOL isFirstLogin;
@property (nonatomic) BOOL isSwitchAccount;
@property (nonatomic) q count;
@property (nonatomic) NSObject<OS_dispatch_queue> trackerQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)didFinishLogin;
- (void)setTrackerQueue:;
- (id)trackerQueue;
- (void)setIsLowPowerMode:;
- (void)p_clearTimer;
- (void)beginTrace;
- (void)dbMark:launchTime:;
- (void)dbMark:launchTime:cmdID:;
- (void)fileMark:launchTime:;
- (void)dbMark:beginTime:;
- (void)fileMark:beginTime:;
- (void)markEnterMessageTab;
- (void)markFirstLogin;
- (BOOL)shouldTrackLaunchIO;
- (void)onPowerStateDidChange:;
- (void)setIsSwitchAccount:;
- (void)p_beginTrace;
- (unsigned long long)loopInterval;
- (void)p_trackAllTargets;
- (id)p_targetWithID:;
- (float)p_durationFromBeginTime:;
- (void)setHasEnterMessageTab:;
- (void)setIsFirstLogin:;
- (BOOL)hasEnterMessageTab;
- (BOOL)isFirstLogin;
- (BOOL)isSwitchAccount;
- (void)p_trackWithParams:;
- (void)setFirstInterval:;
- (void)setLoopInterval:;
- (id)targets;
- (void)setTargets:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (void)setCount:;
- (BOOL)isTracking;
- (long long)count;
- (unsigned long long)beginTime;
- (void).cxx_destruct;
- (void)setIsTracking:;
- (BOOL)isLowPowerMode;
- (id)rwlock;
- (void)setRwlock:;
- (unsigned long long)firstInterval;
@end
