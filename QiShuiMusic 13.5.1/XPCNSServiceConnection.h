@interface XPCNSServiceConnection : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) <XPCNSServiceConnectionDelegate> delegate;
@property (nonatomic) <NSObject> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shutDownCompletionBlock:;
- (void)XPCServiceConnectionDidDisconnect:;
- (void)XPCServiceConnection:didReceiveRequest:sequenceNumber:;
- (id)initWithXPCServiceConnection:;
- (id)context;
- (void)setDelegate:;
- (void)sendMessage:withHandler:;
- (id)serviceName;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
@end
