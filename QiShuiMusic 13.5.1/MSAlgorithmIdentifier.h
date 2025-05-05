@interface MSAlgorithmIdentifier : NSObject
@property (nonatomic) ^{AlgorithmIdentifier={heim_oid=Q^I}^{heim_base_data}} asn1AlgId;
@property (nonatomic) MSOID algorithm;
@property (nonatomic) NSData parameters;
- (id)algorithm;
- (void)dealloc;
- (unsigned long long)hash;
- (id)parameters;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)encode;
- (id)initWithOID:;
- (id)initWithOID:parameters:;
- (id)initDigestAlgorithmWithSignatureAlgorithm:error:;
- (id)initWithAsn1AlgId:error:;
- (id)signatureAlgorithmWithDigestAlgorithm:error:;
- (unsigned int)ccAlgorithm:;
- (unsigned int)ccMode:;
- (id)asn1AlgId;
+ (id)algorithmIdentifierWithOID:;
+ (id)algorithmIdentifierWithAsn1AlgId:error:;
+ (id)digestAlgorithmWithSignatureAlgorithm:error:;
@end
