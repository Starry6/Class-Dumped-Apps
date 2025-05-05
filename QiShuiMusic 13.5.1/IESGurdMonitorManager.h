@interface IESGurdMonitorManager : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) q flushCount;
- (long long)flushCount;
- (void)monitorEvent:category:metric:extra:;
- (void)setFlushCount:;
- (void)setupMonitor;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)sharedManager;
@end
