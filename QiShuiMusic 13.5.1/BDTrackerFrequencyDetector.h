@interface BDTrackerFrequencyDetector : NSObject
@property (nonatomic) double interval;
@property (nonatomic) Q threshold;
@property (nonatomic) @? notifier;
- (BOOL)startMonitoringThreshold:inUnitTimeInterval:withNotifier:;
- (unsigned long long)threshold;
- (id)init;
- (id)notifier;
- (void)setNotifier:;
- (void)receiveEvent:;
- (void)setInterval:;
- (void).cxx_destruct;
- (void)setThreshold:;
- (double)interval;
@end
