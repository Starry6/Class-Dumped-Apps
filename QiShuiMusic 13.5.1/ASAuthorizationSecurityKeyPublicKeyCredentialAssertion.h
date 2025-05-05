@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertion : NSObject
@property (nonatomic) NSData rawAuthenticatorData;
@property (nonatomic) NSData userID;
@property (nonatomic) NSData signature;
@property (nonatomic) NSData rawClientDataJSON;
@property (nonatomic) NSData credentialID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userID;
- (id)signature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)credentialID;
- (id)rawClientDataJSON;
- (id)initWithCoreCredential:;
- (id)rawAuthenticatorData;
- (id)_initWithBaseCredential:userID:signature:rawAuthenticatorData:;
+ (BOOL)supportsSecureCoding;
@end
