@interface HMDCPUFreqInfo : NSObject
@property (nonatomic) q cpuFreqCurrent;
@property (nonatomic) q timeUsage;
@property (nonatomic) q cpuFreqStandard;
@property (nonatomic) float cpuFreqScale;
- (long long)cpuFreqStandard;
- (long long)cpuFreqCurrent;
- (float)cpuFreqScale;
- (void)setCpuFreqCurrent:;
- (void)setCpuFreqScale:;
- (void)setCpuFreqStandard:;
- (void)setTimeUsage:;
- (long long)timeUsage;
@end
