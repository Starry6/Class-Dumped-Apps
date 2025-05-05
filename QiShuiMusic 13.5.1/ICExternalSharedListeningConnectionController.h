@interface ICExternalSharedListeningConnectionController : ICSharedListeningConnectionController
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)sendMessage:;
- (void)start;
- (void)stop;
- (void)setXpcConnection:;
- (id)delegateQueue;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)setDelegateQueue:;
- (id)initWithSessionIdentifier:identity:bundleID:;
- (void)receiveMessageData:;
- (void)receiveConnectionError:;
- (void)receiveFatalError:;
- (void)receiveStartWithSessionIdentifier:sessionToken:inviteURLString:;
- (void)_initializeConnectionIfNeeded;
@end
