@interface NEIKEv2AuthenticationProtocol : NSObject
@property (nonatomic) Q method;
@property (nonatomic) BOOL isCertificate;
@property (nonatomic) BOOL isDigitalSignature;
@property (nonatomic) Q digitalSignatureAlgorithm;
- (unsigned long long)method;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMethod:;
- (id)initWithDigitalSignature:;
- (BOOL)isCertificate;
- (BOOL)isDigitalSignature;
- (unsigned long long)digitalSignatureAlgorithm;
@end
