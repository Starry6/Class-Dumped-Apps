@interface CXNetworkExtensionMessageControllerHostConnection : NSObject
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) NSSet capabilities;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) <CXNetworkExtensionMessageControllerHostConnectionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)applicationIdentifier;
- (void)dealloc;
- (id)capabilities;
- (id)accessorLock;
- (void)setDelegate:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:;
- (void)invalidate;
- (void)sendNetworkExtensionMessage:forBundleIdentifier:reply:;
@end
