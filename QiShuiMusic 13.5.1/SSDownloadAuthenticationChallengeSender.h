@interface SSDownloadAuthenticationChallengeSender : NSObject
@property (nonatomic) SSDownloadAuthenticationSession authenticationSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelAuthenticationChallenge:;
- (void)performDefaultHandlingForAuthenticationChallenge:;
- (void)rejectProtectionSpaceAndContinueWithChallenge:;
- (void)continueWithoutCredentialForAuthenticationChallenge:;
- (void)useCredential:forAuthenticationChallenge:;
- (void)dealloc;
- (id)initWithAuthenticationSession:;
- (id)authenticationSession;
@end
