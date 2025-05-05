@interface ASCPlatformPublicKeyCredentialAssertion : NSObject
@property (nonatomic) NSData credentialID;
@property (nonatomic) NSData rawClientDataJSON;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) NSData authenticatorData;
@property (nonatomic) NSData signature;
@property (nonatomic) NSData userHandle;
@property (nonatomic) NSData extensionOutputsCBOR;
@property (nonatomic) NSString attachment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)signature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)attachment;
- (id)relyingPartyIdentifier;
- (id)userHandle;
- (id)authenticatorData;
- (id)extensionOutputsCBOR;
- (id)credentialID;
- (id)initWithRelyingPartyIdentifier:authenticatorData:signature:userHandle:rawClientDataJSON:credentialID:extensionOutputsCBOR:attachment:;
- (id)rawClientDataJSON;
+ (BOOL)supportsSecureCoding;
@end
