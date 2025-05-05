@interface BSBaseXPCServer : NSObject
@property (nonatomic) BOOL usesAnonymousConnection;
- (id)_connection;
- (void)dealloc;
- (id)_copyEndpoint;
- (void)resumeServer;
- (id)_queue_clientForConnection:;
- (id)_getStringFromMessage:key:;
- (void)_sendReplyForMessage:messagePacker:;
- (Class)queue_classForNewClientConnection:;
- (id)queue_newClientForConnection:;
- (id)_clients;
- (void)setUsesAnonymousConnection:;
- (void)run;
- (void)queue_clientRemoved:;
- (BOOL)queue_shouldAcceptNewConnection:;
- (void)_invalidate;
- (void)queue_handleMessage:client:;
- (void)registerServerSuspended;
- (id)initWithServiceName:onQueue:;
- (void)_sendReply:messagePacker:;
- (id)initWithServiceName:;
- (BOOL)usesAnonymousConnection;
- (id)queue;
- (void)queue_clientAdded:;
- (void)_sendMessageReply:messagePacker:;
+ (BOOL)_registersWithNotifyd;
@end
