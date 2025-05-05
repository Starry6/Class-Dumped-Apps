@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject
@property (nonatomic) {os_unfair_lock_s=I} accessorLock;
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)accessorLock;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (BOOL)taskHasEntitlement:;
- (BOOL)requestDidArriveFromExtensionPoint;
- (void)requestApplicationLaunchForIncomingCall:completion:;
@end
