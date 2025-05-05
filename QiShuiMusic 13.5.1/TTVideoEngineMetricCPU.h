@interface TTVideoEngineMetricCPU : TTVideoEngineMetricInfoBase
@property (nonatomic) float cpuRate;
@property (nonatomic) float totalRate;
@property (nonatomic) float mainThreadUsage;
- (float)mainThreadUsage;
- (float)cpuRate;
- (void)setCpuRate:;
- (void)setMainThreadUsage:;
- (void)setTotalRate:;
- (float)totalRate;
@end
