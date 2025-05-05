@interface CWFEAP8021X : NSObject
@property (nonatomic) NSString interfaceName;
@property (nonatomic) @? eventHandler;
- (void)startEventMonitoring;
- (id)initWithInterfaceName:;
- (id)init;
- (void)dealloc;
- (void)stopEventMonitoring;
- (id)clientStatus:;
- (BOOL)isMonitoringEvents;
- (void)__startEventMonitoring;
- (void)setEventHandler:;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)supplicantState:;
- (id)interfaceName;
- (id)controlMode:;
- (id)controlState:;
@end
