@interface CWFSCNetworkService : NSObject
@property (nonatomic) @? eventHandler;
@property (nonatomic) NSString interfaceName;
@property (nonatomic) NSString serviceID;
- (void)startEventMonitoring;
- (id)initWithInterfaceName:;
- (id)IPv6Addresses;
- (void)restartEventMonitoring;
- (id)__IPv4StateConfig;
- (id)IPv4Addresses;
- (id)__IPv6StateConfig;
- (id)init;
- (BOOL)__updateServiceID;
- (void)dealloc;
- (id)__proxiesSetupConfig;
- (id)__IPv4SetupConfig;
- (id)serviceID;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (void)setEventHandler:;
- (id)serviceName;
- (id)DHCPLeaseStartTimestamp;
- (void)refreshServiceID;
- (id)IPv6Router;
- (id)IPv4ConfigMethod;
- (id)__DHCPInfo;
- (id)DNSDomainName;
- (id)eventHandler;
- (id)IPv6ConfigMethod;
- (id)__DNSStateConfig;
- (void).cxx_destruct;
- (id)DNSServerAddresses;
- (BOOL)isServiceEnabled;
- (id)DHCPLeaseExpirationTimestamp;
- (id)interfaceName;
- (id)__DNSSetupConfig;
- (void)__refreshNotificationKeys;
- (id)IPv4Router;
- (id)__IPv6SetupConfig;
@end
