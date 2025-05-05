@interface ASAuthorizationSecurityKeyPublicKeyCredentialProvider : NSObject
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)relyingPartyIdentifier;
- (id)initWithRelyingPartyIdentifier:;
- (id)createCredentialRegistrationRequestWithChallenge:displayName:name:userID:;
- (id)createCredentialAssertionRequestWithChallenge:;
@end
