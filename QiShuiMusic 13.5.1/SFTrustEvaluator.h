@interface SFTrustEvaluator : NSObject
@property (nonatomic) SFTrustPolicy trustPolicy;
@property (nonatomic) SFRevocationPolicy revocationPolicy;
@property (nonatomic) NSArray applicationAnchorCertificates;
@property (nonatomic) BOOL allowCertificateFetching;
@property (nonatomic) BOOL trustSystemAnchorCertificates;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)trustPolicy;
- (id)revocationPolicy;
- (id)applicationAnchorCertificates;
- (id)initWithTrustPolicy:;
- (id)initWithTrustPolicy:revocationPolicy:;
- (id)initWithTrustPolicy:revocationPolicy:applicationAnchorCertificates:allowCertificateFetching:trustSystemAnchorCertificates:;
- (void)evaluateCertificateChain:forDate:resultHandler:;
- (void)setTrustPolicy:;
- (void)setRevocationPolicy:;
- (void)setApplicationAnchorCertificates:;
- (BOOL)allowCertificateFetching;
- (void)setAllowCertificateFetching:;
- (BOOL)trustSystemAnchorCertificates;
- (void)setTrustSystemAnchorCertificates:;
+ (BOOL)supportsSecureCoding;
@end
