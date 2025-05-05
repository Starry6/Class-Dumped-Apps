@interface ARDaemonControl : NSObject
@property (nonatomic) ARServer server;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)interruptionHandler;
- (id)server;
- (void)setServer:;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (id)initWithConnection:;
- (void)getStatusWithVerboseOutput:reply:;
- (void)getStatusDictionaryWithReply:;
+ (id)controlProxyInterface;
+ (id)controlInterface;
@end
