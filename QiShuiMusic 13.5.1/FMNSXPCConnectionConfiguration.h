@interface FMNSXPCConnectionConfiguration : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSXPCInterface remoteInterface;
@property (nonatomic) NSXPCInterface exportedInterface;
@property (nonatomic) Q options;
@property (nonatomic) BOOL machService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (void)setExportedInterface:;
- (id)exportedInterface;
- (void)setServiceName:;
- (id)serviceName;
- (id)remoteInterface;
- (unsigned long long)options;
- (void)setMachService:;
- (BOOL)machService;
- (void)setRemoteInterface:;
- (void).cxx_destruct;
+ (id)eraseDeviceServiceConfiguration;
+ (id)userNotificationConfiguration;
+ (id)fmipConfiguration;
+ (id)emergencyCallInfoPublisherConfiguration;
+ (id)helperConfiguration;
+ (id)identityConfiguration;
+ (id)btDiscoveryConfiguration;
@end
