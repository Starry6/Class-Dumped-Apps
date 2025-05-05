@interface ASCAgentProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)_proxy;
- (id)_remoteObjectProxyWithErrorHandler:;
- (void).cxx_destruct;
- (void)_setUpConnection:;
- (void)invalidate;
- (void)cancelCurrentRequest;
- (void)reconnectIfNecessary;
- (void)performAuthorizationRequestsForContext:withCompletionHandler:;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:;
- (void)getArePasskeysDisallowedForRelyingParty:withCompletionHandler:;
- (void)openCABLEURL:fromSourceApplication:withCompletionHandler:;
@end
