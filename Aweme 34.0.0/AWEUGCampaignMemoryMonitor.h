@interface AWEUGCampaignMemoryMonitor : NSObject
@property (nonatomic) double monitorTimeInterval;
@property (nonatomic) NSTimer timer;
- (void)startMemoryMonitor;
- (void)stopMemoryMonitor;
- (double)monitorTimeInterval;
- (void)timerCallBackWithTimer:;
- (void)setMonitorTimeInterval:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
