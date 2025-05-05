@interface BU_AFSecurityPolicy : NSObject
@property (nonatomic) Q SSLPinningMode;
@property (nonatomic) NSSet pinnedPublicKeys;
@property (nonatomic) NSSet pinnedCertificates;
@property (nonatomic) BOOL allowInvalidCertificates;
@property (nonatomic) BOOL validatesDomainName;
- (unsigned long long)SSLPinningMode;
- (BOOL)allowInvalidCertificates;
- (BOOL)evaluateServerTrust:forDomain:;
- (id)pinnedPublicKeys;
- (void)setAllowInvalidCertificates:;
- (void)setPinnedPublicKeys:;
- (void)setSSLPinningMode:;
- (void)setValidatesDomainName:;
- (BOOL)validatesDomainName;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)pinnedCertificates;
- (void)setPinnedCertificates:;
+ (id)certificatesInBundle:;
+ (id)defaultPinnedCertificates;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (BOOL)supportsSecureCoding;
+ (id)defaultPolicy;
@end
