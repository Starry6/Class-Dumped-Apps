@interface HMDCPUExceptionPerf : NSObject
@property (nonatomic) BOOL enablePerfWatch;
- (BOOL)enablePerfWatch;
- (void)collectPerformanceWithServiceName:timeUsage:category:;
- (void)exceptionRecordPrepareWithTimeUsage:infoSize:;
- (void)exceptionThreadTimeUsage:;
- (void)monitorThreadCPUUsgeOutOfThreshold:;
- (void)recordTransformDictTimeUsage:;
- (void)recordWriteFileWithStartTS:endTS:infoCount:;
- (void)setEnablePerfWatch:;
- (void)threadBackTreeWithTimeUsage:threadCount:suspendThread:;
@end
