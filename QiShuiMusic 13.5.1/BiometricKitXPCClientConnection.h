@interface BiometricKitXPCClientConnection : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)client:;
- (BOOL)removeClient:;
- (BOOL)addClient:;
- (id)initWithDeviceType:;
- (void)templateUpdate:details:client:;
- (void)dealloc;
- (void)enrollFeedback:client:;
- (void)touchIDButtonPressed:client:;
- (void)homeButtonPressed:;
- (void)enrollUpdate:client:;
- (id)xpcConnection;
- (void)statusMessage:details:client:;
- (void).cxx_destruct;
- (void)statusMessage:client:;
- (void)taskResumeStatus:client:;
- (id)queue;
- (void)enrollResult:details:client:;
- (void)matchResult:details:client:;
+ (id)connectionWithDeviceType:;
@end
