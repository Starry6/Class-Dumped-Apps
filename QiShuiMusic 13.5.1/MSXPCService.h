@interface MSXPCService : NSObject
@property (nonatomic) BOOL shouldLaunchMobileMail;
- (id)init;
- (void)dealloc;
- (id)newConnectionForInterface:;
- (id)remoteObjectProxy;
- (BOOL)shouldLaunchMobileMail;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)initWithRemoteObjectInterface:;
- (id)connection;
- (void).cxx_destruct;
- (void)setShouldLaunchMobileMail:;
+ (id)remoteProxyForXPCInterface:connectionErrorHandler:;
+ (id)remoteProxyForXPCInterface:shouldLaunchMobileMail:connectionErrorHandler:;
@end
