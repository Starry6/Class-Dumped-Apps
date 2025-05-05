@interface FBProcessCPUStatistics : NSObject
@property (nonatomic) double totalElapsedTime;
@property (nonatomic) double totalElapsedUserTime;
@property (nonatomic) double totalElapsedSystemTime;
@property (nonatomic) double totalElapsedIdleTime;
- (double)totalElapsedIdleTime;
- (id)descriptionForCrashReport;
- (void)_hostwideUserElapsedCPUTime:systemElapsedCPUTime:idleElapsedCPUTime:;
- (id)initWithProcessHandle:;
- (void).cxx_destruct;
- (void)reset;
- (void)_lock_getApplicationCPUTimesForUser:system:idle:;
- (double)totalElapsedSystemTime;
- (double)totalElapsedUserTime;
- (double)totalElapsedTime;
@end
