@interface ASCPlatformPublicKeyCredentialRegistration : NSObject
@property (nonatomic) NSData credentialID;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) NSData attestationObject;
@property (nonatomic) NSData rawClientDataJSON;
@property (nonatomic) NSArray transports;
@property (nonatomic) NSData extensionOutputsCBOR;
@property (nonatomic) NSString attachment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)transports;
- (void)setTransports:;
- (id)attachment;
- (id)relyingPartyIdentifier;
- (id)attestationObject;
- (id)extensionOutputsCBOR;
- (void)setExtensionOutputsCBOR:;
- (id)credentialID;
- (id)initWithRelyingPartyIdentifier:attestationObject:rawClientDataJSON:credentialID:transports:extensionOutputsCBOR:attachment:;
- (id)rawClientDataJSON;
+ (BOOL)supportsSecureCoding;
@end
