@interface IMMultiplexedDaemonConnection : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) Q capabilities;
@property (nonatomic) NSDictionary context;
@property (nonatomic) <IMDaemonProtocol> remoteProxy;
@property (nonatomic) <IMDaemonProtocol> synchronousRemoteProxy;
- (id)init;
- (void)waitForSetup;
- (void)connectWithCompletion:;
- (void)dealloc;
- (id)remoteProxy;
- (unsigned long long)capabilities;
- (id)context;
- (id)label;
- (id)initWithLabel:capabilities:context:onInvalidate:onDealloc:;
- (void).cxx_destruct;
- (id)synchronousRemoteProxy;
- (void)invalidate;
@end
