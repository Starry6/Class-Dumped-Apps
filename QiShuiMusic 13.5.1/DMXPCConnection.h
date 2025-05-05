@interface DMXPCConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? messageHandler;
- (void)sendMessage:replyHandler:;
- (id)interruptionHandler;
- (void)setInterruptionHandler:;
- (void)handleMessage:;
- (id)sendMessageSync:;
- (void)_handleMessage:;
- (void)resume;
- (id)messageHandler;
- (id)connection;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)initWithConnection:;
- (id)initWithServiceName:;
- (void)invalidate;
- (BOOL)hasEntitlement:;
- (void)setMessageHandler:;
@end
