@interface XPCNSServiceListener : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) <XPCNSServiceListenerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shutDownCompletionBlock:;
- (void)start;
- (id)serviceName;
- (id)delegate;
- (void).cxx_destruct;
- (void)XPCServiceListener:didReceiveNewConnection:;
- (BOOL)XPCServiceListener:shouldAcceptNewConnection:;
- (id)initWithServiceName:queue:delegate:;
@end
