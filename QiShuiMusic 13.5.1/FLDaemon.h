@interface FLDaemon : NSObject
@property (nonatomic) NSXPCListenerEndpoint daemonXPCEndpoint;
- (void)invalidateConnection;
- (id)init;
- (void)dealloc;
- (id)daemonXPCEndpoint;
- (id)synchronousDaemonWithErrorHandler:;
- (id)daemonWithErrorHandler:;
- (id)connection;
- (void).cxx_destruct;
- (id)remoteObjectInterface;
- (void)setDaemonXPCEndpoint:;
+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:;
@end
