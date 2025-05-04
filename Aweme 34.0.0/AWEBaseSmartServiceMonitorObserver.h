@interface AWEBaseSmartServiceMonitorObserver : NSObject
@property (nonatomic) <FurionSmartServiceMonitor> monitor;
- (void)onTriggerEvent:params:;
- (void)setMonitor:;
- (id)monitor;
- (void).cxx_destruct;
@end
