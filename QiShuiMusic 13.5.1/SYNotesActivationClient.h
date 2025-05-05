@interface SYNotesActivationClient : NSObject
@property (nonatomic) NSXPCConnection _connection;
@property (nonatomic) NSObject<OS_dispatch_queue> _clientQueue;
- (void)_setConnection:;
- (id)_connection;
- (id)init;
- (id)_clientQueue;
- (void).cxx_destruct;
- (void)activateNotesWithUserActivity:completion:;
- (void)_ensureConnection;
- (void)_clientQueue:;
@end
