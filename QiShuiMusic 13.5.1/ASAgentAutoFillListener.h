@interface ASAgentAutoFillListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)newPasskeysAvailableForApplicationIdentifier:;
- (void)userSelectedAutoFillNearbyDevice:completionHandler:;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:withCompletionHandler:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)userSelectedAutoFillPasskey:authenticatedLAContext:completionHandler:;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:completionHandler:;
- (id)initWithPublicKeyCredentialManager:;
@end
