@interface CWFIO80211 : NSObject
@property (nonatomic) @? eventHandler;
- (void)startEventMonitoring;
- (id)init;
- (void)dealloc;
- (void)stopEventMonitoring;
- (id)__IO80211InfoMatchingService:;
- (BOOL)isMonitoringEvents;
- (id)IO80211ControllerInfo;
- (void)setEventHandler:;
- (id)IO80211InterfaceInfo:error:;
- (id)eventHandler;
- (void).cxx_destruct;
@end
