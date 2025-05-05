@interface STConcretePasscodeAuthenticationProviderService : NSObject
@property (nonatomic) NSXPCListenerEndpoint clientListenerEndpoint;
@property (nonatomic) @? pendingAuthenticationCompletionHandler;
- (void).cxx_destruct;
- (id)description;
- (void)receivePasscodeAuthenticationResult:completionHandler:;
- (void)authenticatePasscodeWithCommunicationServiceProxy:completionHandler:;
- (id)initWithClientListenerEndpoint:;
- (id)clientListenerEndpoint;
- (id)pendingAuthenticationCompletionHandler;
- (void)setPendingAuthenticationCompletionHandler:;
@end
