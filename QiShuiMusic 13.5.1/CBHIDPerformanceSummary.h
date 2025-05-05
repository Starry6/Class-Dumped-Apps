@interface CBHIDPerformanceSummary : NSObject
@property (nonatomic) CBDevice device;
@property (nonatomic) NSError error;
@property (nonatomic) double errorRate;
@property (nonatomic) double intervalSecondsExpected;
@property (nonatomic) double intervalSecondsMax;
@property (nonatomic) c rssi;
- (char)rssi;
- (void)setDevice:;
- (void)setError:;
- (id)error;
- (void)setRssi:;
- (void).cxx_destruct;
- (id)device;
- (double)errorRate;
- (void)setErrorRate:;
- (double)intervalSecondsExpected;
- (void)setIntervalSecondsExpected:;
- (double)intervalSecondsMax;
- (void)setIntervalSecondsMax:;
@end
