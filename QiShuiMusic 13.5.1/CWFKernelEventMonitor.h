@interface CWFKernelEventMonitor : NSObject
@property (nonatomic) @? eventHandler;
- (void)startEventMonitoring;
- (id)init;
- (void)dealloc;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (void)setEventHandler:;
- (id)eventHandler;
- (id)__descriptionForKernelEventCode:;
- (void).cxx_destruct;
- (unsigned long long)interfaceFlagsWithInterfaceName:;
@end
