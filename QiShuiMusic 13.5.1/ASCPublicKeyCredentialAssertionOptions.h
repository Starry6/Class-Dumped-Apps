@interface ASCPublicKeyCredentialAssertionOptions : NSObject
@property (nonatomic) Q credentialKind;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) NSData challenge;
@property (nonatomic) NSData clientDataHash;
@property (nonatomic) NSString userVerificationPreference;
@property (nonatomic) NSNumber timeout;
@property (nonatomic) ASCWebAuthenticationExtensionsClientInputs extensions;
@property (nonatomic) NSData extensionsCBOR;
@property (nonatomic) NSArray allowedCredentials;
@property (nonatomic) NSString destinationSiteForCrossSiteAssertion;
- (void)setExtensions:;
- (id)extensions;
- (void)setTimeout:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeout;
- (id)challenge;
- (id)relyingPartyIdentifier;
- (id)initWithKind:relyingPartyIdentifier:challenge:userVerificationPreference:allowedCredentials:;
- (unsigned long long)credentialKind;
- (id)extensionsCBOR;
- (void)setExtensionsCBOR:;
- (void)setClientDataHash:;
- (id)initWithKind:relyingPartyIdentifier:clientDataHash:userVerificationPreference:allowedCredentials:;
- (void)setDestinationSiteForCrossSiteAssertion:;
- (id)clientDataHash;
- (id)destinationSiteForCrossSiteAssertion;
- (id)allowedCredentials;
- (id)userVerificationPreference;
+ (BOOL)supportsSecureCoding;
@end
