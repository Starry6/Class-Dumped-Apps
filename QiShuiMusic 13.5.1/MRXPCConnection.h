@interface MRXPCConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) @? messageHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSInteger pid;
@property (nonatomic) I uid;
- (void)dealloc;
- (unsigned int)uid;
- (id)sendSyncMessage:error:;
- (id)sendSyncMessageWithType:error:;
- (void)addCustomXPCHandler:forKey:;
- (void)sendMessage:queue:reply:;
- (id)messageHandler;
- (void)sendMessageWithType:queue:reply:;
- (int)pid;
- (id)connection;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)removeCustomXPCHandler:;
- (id)initWithConnection:queue:defaultReplyQueue:;
- (void)setMessageHandler:;
@end
