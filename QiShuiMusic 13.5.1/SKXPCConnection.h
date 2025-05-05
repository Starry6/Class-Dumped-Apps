@interface SKXPCConnection : NSObject
@property (nonatomic) @? disconnectBlock;
@property (nonatomic) @? messageBlock;
- (id)init;
- (id)createXPCEndpoint;
- (void)sendMessage:;
- (id)initWithXPCConnection:;
- (id)disconnectBlock;
- (void)_reloadEventHandler;
- (void).cxx_destruct;
- (void)setDisconnectBlock:;
- (id)messageBlock;
- (id)initWithServiceName:;
- (void)sendMessage:withReply:;
- (void)setMessageBlock:;
- (void)sendSynchronousMessage:withReply:;
- (id)_initSKXPCConnection;
@end
