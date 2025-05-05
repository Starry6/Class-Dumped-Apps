@interface IMDaemonConnection : NSObject
@property (nonatomic) BOOL isConnected;
@property (nonatomic) <IMDaemonProtocol> remoteObjectProxy;
@property (nonatomic) <IMDaemonProtocol> synchronousRemoteObjectProxy;
@property (nonatomic) @? onSetupComplete;
- (void)waitForSetup;
- (id)synchronousRemoteObjectProxy;
- (void)disconnect;
- (id)remoteObjectProxy;
- (void)requestSetup;
- (BOOL)isConnected;
- (id)onSetupComplete;
- (void)setOnSetupComplete:;
- (void)connectWithCapabilities:context:contextChanged:;
- (void)requestSetupIfNeededWithCompletionHandler:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListener:;
@end
