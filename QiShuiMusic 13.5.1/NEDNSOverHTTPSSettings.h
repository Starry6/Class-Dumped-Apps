@interface NEDNSOverHTTPSSettings : NEDNSSettings
@property (nonatomic) NSURL serverURL;
@property (nonatomic) NSData identityReference;
- (BOOL)checkValidityAndCollectErrors:;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)dnsProtocol;
- (id)serverURL;
- (id)identityReference;
- (void)setIdentityReference:;
- (void)setServerURL:;
+ (BOOL)supportsSecureCoding;
@end
