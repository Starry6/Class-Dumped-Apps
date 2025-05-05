@interface WBSAuthenticationServicesAgentProxy : NSObject
@property (nonatomic) <WBSAuthenticationServicesAgentDelegate> delegate;
- (id)init;
- (void)newPasskeysAvailableForApplicationIdentifier:;
- (void)setDelegate:;
- (void)userSelectedAutoFillNearbyDevice:completionHandler:;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:withCompletionHandler:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)userSelectedAutoFillPasskey:authenticatedLAContext:completionHandler:;
- (void)_setUpConnection:;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:completionHandler:;
@end
