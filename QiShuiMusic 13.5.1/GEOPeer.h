@interface GEOPeer : NSObject
@property (nonatomic) NSString debugIdentifier;
@property (nonatomic) NSMutableDictionary entitlementCache;
@property (nonatomic) Q handleRequestSignpost;
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSString peerID;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (nonatomic) BOOL isLocationd;
@property (nonatomic) GEOProxyClient clientIdentifier;
- (id)bundleVersion;
- (id)initWithConnection:daemon:;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)valueForEntitlement:;
- (id)peerID;
- (id)debugIdentifier;
- (void)setPreloading:;
- (void)setPreloadingExclusively:;
- (void)_handleEvent:;
- (id)entitlementCache;
- (BOOL)preloadingExclusively;
- (BOOL)isLocationd;
- (void)setDebugIdentifier:;
- (void)setHandleRequestSignpost:;
- (id)connection;
- (void).cxx_destruct;
- (unsigned long long)handleRequestSignpost;
- (id)description;
- (id)clientIdentifier;
- (void)setEntitlementCache:;
- (BOOL)hasEntitlement:;
- (BOOL)preloading;
@end
