@interface CAProcessMonitor : NSObject
- (void)updateConfiguration;
- (void)dealloc;
- (id)initWithCallback:;
- (void)addMonitoringProcess:isRunning:isSuspended:;
- (void)removeMonitoringProcess:;
@end
