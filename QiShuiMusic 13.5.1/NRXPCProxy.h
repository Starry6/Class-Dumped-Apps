@interface NRXPCProxy : NSObject
@property (nonatomic) BOOL invalidated;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString appPath;
@property (nonatomic) @ target;
@property (nonatomic) @ remoteObjectProxy;
@property (nonatomic) <NRNSXPCConnectionProtocol> connection;
@property (nonatomic) BOOL monitorClientForSuspension;
- (BOOL)invalidated;
- (id)remoteObjectProxy;
- (void)_invalidate;
- (int)pid;
- (id)connection;
- (void).cxx_destruct;
- (id)target;
- (BOOL)hasEntitlement:;
- (id)initWithConnection:delegate:xpcTarget:entitlementBitmask:;
- (id)appPath;
- (BOOL)hasEntitlements;
- (void)setMonitorClientForSuspension:;
- (BOOL)monitorClientForSuspension;
+ (id)entitlements;
+ (id)machServiceName;
+ (id)clientExportedInterface;
+ (id)serverRemoteObjectInterface;
+ (id)serverExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (BOOL)requireAnEntitlement;
@end
