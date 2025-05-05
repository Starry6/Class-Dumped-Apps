@interface CXNetworkExtensionMessageControllerHost : NSObject
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) NSMutableSet connections;
@property (nonatomic) NSMapTable delegateToQueue;
@property (nonatomic) NSXPCListener xpcListener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)connections;
- (id)init;
- (id)accessorLock;
- (void)removeDelegate:;
- (id)xpcListener;
- (void)networkExtensionMessageControllerHostConnection:didReceiveIncomingMessage:forBundleIdentifier:;
- (void)addDelegate:queue:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)delegateToQueue;
- (void)networkExtensionMessageControllerHostConnectionInvalidated:;
@end
