@interface IESLivePerformanceInfo : NSObject
@property (nonatomic) q device;
@property (nonatomic) double cpuUsage;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double batteryLevel;
@property (nonatomic) double uiStallRate;
@property (nonatomic) q netQuality;
@property (nonatomic) q thermal;
- (void)setUiStallRate:;
- (long long)thermal;
- (double)gpuUsage;
- (long long)netQuality;
- (void)setGpuUsage:;
- (void)setNetQuality:;
- (void)setThermal:;
- (double)uiStallRate;
- (double)batteryLevel;
- (void)setDevice:;
- (double)cpuUsage;
- (void)setBatteryLevel:;
- (void)setCpuUsage:;
- (long long)device;
@end
