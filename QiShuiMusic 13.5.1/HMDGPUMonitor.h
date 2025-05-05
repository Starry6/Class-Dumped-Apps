@interface HMDGPUMonitor : HMDMonitor
@property (nonatomic) BOOL stopRecordGPU;
- (void)recordProcessingUnitUsage;
- (void)setStopRecordGPU:;
- (BOOL)stopRecordGPU;
- (void)updateConfig:;
- (id)refresh;
+ (id)sharedMonitor;
@end
