@interface PuzzleDeviceStatsInfo : NSObject
@property (nonatomic) double cpuUsage;
@property (nonatomic) double memoryRest;
@property (nonatomic) double temperature;
- (double)memoryRest;
- (void)setMemoryRest:;
- (void)setTemperature:;
- (double)cpuUsage;
- (void)setCpuUsage:;
- (double)temperature;
@end
