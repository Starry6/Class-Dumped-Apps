@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertionRequest : ASAuthorizationRequest
@property (nonatomic) ASCPublicKeyCredentialAssertionOptions coreCredentialAssertionOptions;
@property (nonatomic) NSArray allowedCredentials;
@property (nonatomic) NSData challenge;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) NSString userVerificationPreference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setChallenge:;
- (void).cxx_destruct;
- (id)challenge;
- (id)relyingPartyIdentifier;
- (void)setRelyingPartyIdentifier:;
- (void)setUserVerificationPreference:;
- (BOOL)supportsStyle:;
- (id)allowedCredentials;
- (void)setAllowedCredentials:;
- (id)userVerificationPreference;
- (id)_initWithProvider:relyingPartyIdentifier:challenge:;
- (id)coreCredentialAssertionOptions;
@end
