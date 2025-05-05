@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
@property (nonatomic) NSData pemData;
- (void).cxx_destruct;
- (id)copyCertificate;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (id)initWithDictionary:profile:outError:;
- (id)copyIdentityFromKeychain;
- (id)pemData;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
