@interface SSXPCConnection : NSObject
@property (nonatomic) @? disconnectBlock;
@property (nonatomic) @? messageBlock;
- (id)init;
- (void)dealloc;
- (id)createXPCEndpoint;
- (void)sendMessage:;
- (id)initWithXPCConnection:;
- (id)disconnectBlock;
- (void)_reloadEventHandler;
- (id)copyReplyQueue;
- (void)setReplyQueue:;
- (void)setDisconnectBlock:;
- (id)messageBlock;
- (id)initWithServiceName:;
- (id)_initSSXPCConnection;
- (void)sendMessage:withReply:;
- (void)setMessageBlock:;
- (void)sendSynchronousMessage:withReply:;
@end
