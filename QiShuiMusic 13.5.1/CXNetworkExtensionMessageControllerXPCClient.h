@interface CXNetworkExtensionMessageControllerXPCClient : NSObject
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)accessorLock;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (void)sendNetworkExtensionMessage:forBundleIdentifier:completion:;
@end
