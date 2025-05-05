@interface ICFCallServer : NSObject
- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (void)_cleanupClient:;
- (void)_clientConnected;
- (void)_configureWithClient:;
- (void)shouldAllowIncomingCallForNumber:forProviderIdentifier:response:;
- (void)_requestCallGrantForIdentifier:forProviderIdentifier:waitForResponse:completionBlock:;
+ (id)sharedInstance;
@end
