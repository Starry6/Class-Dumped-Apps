@interface HMDBatteryMonitorRecord : HMDMonitorRecord
@property (nonatomic) q batteryState;
@property (nonatomic) double batteryLevel;
@property (nonatomic) double pageUsage;
@property (nonatomic) double perMinuteUsage;
@property (nonatomic) double sessionUsage;
- (double)pageUsage;
- (double)perMinuteUsage;
- (double)sessionUsage;
- (void)setPageUsage:;
- (void)setPerMinuteUsage:;
- (void)setSessionUsage:;
- (double)batteryLevel;
- (void)setBatteryLevel:;
- (double)value;
- (long long)batteryState;
- (void)setBatteryState:;
- (id)reportDictionary;
+ (id)aggregateDataWithRecords:;
+ (unsigned long long)cleanupWeight;
@end
