@interface CXXPCCallSource : CXCallSource
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) NSSet capabilities;
@property (nonatomic) BOOL hasVoIPBackgroundMode;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)bundleURL;
- (id)vendorProtocolDelegate;
- (id)capabilities;
- (id)accessorLock;
- (id)localizedName;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)auditToken;
- (BOOL)hasVoIPBackgroundMode;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePublicAPI;
- (void)setConnection:;
- (id)initWithConnection:;
@end
