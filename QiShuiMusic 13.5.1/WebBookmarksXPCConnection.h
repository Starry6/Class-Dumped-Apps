@interface WebBookmarksXPCConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) <WebBookmarksXPCConnectionDelegate> delegate;
- (void)sendMessage:;
- (BOOL)hasBoolEntitlement:;
- (void)setDelegate:;
- (void)_handleMessage:;
- (id)delegate;
- (void)setMessageHandlers:;
- (void)setHandler:forMessageNamed:;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (id)initClientForMachService:;
- (id)messageWithName:;
- (void)sendMessage:withReplyHandler:;
@end
