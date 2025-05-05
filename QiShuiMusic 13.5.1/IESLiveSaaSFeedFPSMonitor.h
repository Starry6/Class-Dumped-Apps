@interface IESLiveSaaSFeedFPSMonitor : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double lastFPS;
- (double)lastFPS;
- (void)applicationWillResignActiveNotification:;
- (void)registerAppActiveNoti;
- (void)setLastFPS:;
- (void)startRecord;
- (void)stopRecord;
- (void)updateFPS:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:;
@end
