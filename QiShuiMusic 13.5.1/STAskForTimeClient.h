@interface STAskForTimeClient : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)sendAskForTimeRequest:completionHandler:;
- (void)approveExceptionForRequest:completionHandler:;
- (void)fetchLastResponseForRequestedResourceIdentifier:usageType:withCompletionHandler:;
- (void)handleAnswer:requestIdentifier:timeApproved:completionHandler:;
- (void)_synchronousProxyWithHandler:;
- (void)_asynchronousProxyWithHandler:;
@end
