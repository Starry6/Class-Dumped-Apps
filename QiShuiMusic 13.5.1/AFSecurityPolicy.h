@interface AFSecurityPolicy : NSObject
@property (nonatomic) Q SSLPinningMode;
@property (nonatomic) NSArray pinnedPublicKeys;
@property (nonatomic) BOOL validatesCertificateChain;
@property (nonatomic) NSArray pinnedCertificates;
@property (nonatomic) BOOL allowInvalidCertificates;
@property (nonatomic) BOOL validatesDomainName;
- (unsigned long long)SSLPinningMode;
- (BOOL)allowInvalidCertificates;
- (BOOL)evaluateServerTrust:;
- (BOOL)evaluateServerTrust:forDomain:;
- (id)pinnedPublicKeys;
- (void)setAllowInvalidCertificates:;
- (void)setPinnedPublicKeys:;
- (void)setSSLPinningMode:;
- (void)setValidatesCertificateChain:;
- (void)setValidatesDomainName:;
- (BOOL)validatesCertificateChain;
- (BOOL)validatesDomainName;
- (id)init;
- (void).cxx_destruct;
- (id)pinnedCertificates;
- (void)setPinnedCertificates:;
+ (id)defaultPinnedCertificates;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:;
+ (id)defaultPolicy;
@end
