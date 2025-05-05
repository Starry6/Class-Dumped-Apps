@interface HMDCPUTimeDetector : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> cpuSampleQueue;
@property (nonatomic) NSObject<OS_dispatch_source> sampleTimer;
@property (nonatomic) BOOL isCPUException;
- (void)setSampleTimer:;
- (id)cpuSampleQueue;
- (BOOL)isCPUException;
- (void)notifyCPUException:;
- (void)sampleCPUTime;
- (id)sampleTimer;
- (void)setCpuSampleQueue:;
- (void)setIsCPUException:;
- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
+ (id)sharedDetector;
@end
