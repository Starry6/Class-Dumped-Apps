@interface KiteProbeManager : NSObject
@property (nonatomic) KPHeartbeatMainThread heartbeatMainThread;
@property (nonatomic) NSObject<OS_dispatch_queue> contextExecutionQueue;
- (id)contextExecutionQueue;
- (id)heartbeatMainThread;
- (void)setContextExecutionQueue:;
- (void)setHeartbeatMainThread:;
- (id)init;
- (void)start;
- (void)execute:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
