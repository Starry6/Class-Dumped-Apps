@interface CWFSCNetworkReachability : NSObject
@property (nonatomic) @? eventHandler;
- (void)startEventMonitoring;
- (id)init;
- (void)dealloc;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (void)setEventHandler:;
- (id)eventHandler;
- (void).cxx_destruct;
- (unsigned int)flags;
@end
