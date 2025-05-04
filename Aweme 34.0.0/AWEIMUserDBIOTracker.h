@interface AWEIMUserDBIOTracker : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSMutableDictionary targets;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q loopInterval;
@property (nonatomic) NSObject<OS_dispatch_queue> trackerQueue;
@property (nonatomic) BOOL enableTrace;
- (void)setTrackerQueue:;
- (id)trackerQueue;
- (void)p_clearTimer;
- (void)beginTrace;
- (unsigned long long)loopInterval;
- (void)p_trackAllTargets;
- (void)p_trackWithParams:;
- (void)setLoopInterval:;
- (void)trackOneUserReadScene:;
- (void)setEnableTrace:;
- (BOOL)enableTrace;
- (id)targets;
- (void)setTargets:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
