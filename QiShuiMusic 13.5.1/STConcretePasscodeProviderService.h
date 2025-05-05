@interface STConcretePasscodeProviderService : NSObject
@property (nonatomic) NSXPCListenerEndpoint clientListenerEndpoint;
@property (nonatomic) @? pendingProvidePasscodeCompletionHandler;
- (void).cxx_destruct;
- (id)description;
- (void)receivePasscode:completionHandler:;
- (id)initWithClientListenerEndpoint:;
- (id)clientListenerEndpoint;
- (void)collectPasscodeWithSetupServiceProxy:completionHandler:;
- (id)pendingProvidePasscodeCompletionHandler;
- (void)setPendingProvidePasscodeCompletionHandler:;
@end
