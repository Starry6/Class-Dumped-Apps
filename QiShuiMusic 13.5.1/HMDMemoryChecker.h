@interface HMDMemoryChecker : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> checkerQueue;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) {?=BQQddBi} builder;
@property (nonatomic) Q actualThreshold;
@property (nonatomic) double notifyTimestamp;
@property (nonatomic) Q lastMemoryUsage;
- (unsigned long long)actualThreshold;
- (unsigned long long)lastMemoryUsage;
- (double)notifyTimestamp;
- (void)activateByBuilder:;
- (void)checkMemoryUsagePeriodly;
- (id)checkerQueue;
- (void)setActualThreshold:;
- (void)setCheckerQueue:;
- (void)setLastMemoryUsage:;
- (void)setNotifyTimestamp:;
- (id)init;
- (id)builder;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)invalidate;
- (void)setBuilder:;
@end
