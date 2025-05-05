@interface WebCoreAuthenticationClientAsChallengeSender : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelAuthenticationChallenge:;
- (void)performDefaultHandlingForAuthenticationChallenge:;
- (void)rejectProtectionSpaceAndContinueWithChallenge:;
- (void)continueWithoutCredentialForAuthenticationChallenge:;
- (void)useCredential:forAuthenticationChallenge:;
- (id)client;
- (id)initWithAuthenticationClient:;
- (void)detachClient;
@end
