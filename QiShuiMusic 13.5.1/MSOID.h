@interface MSOID : NSObject
@property (nonatomic) {heim_oid=Q^I} Asn1OID;
@property (nonatomic) r^{ccdigest_info=QQQQ*^v^?^?i} ccdigest;
@property (nonatomic) NSData OIDBytes;
@property (nonatomic) NSString OIDString;
@property (nonatomic) r^{__CFString=} secKeyAlgorithm;
- (id)initWithData:error:;
- (void)dealloc;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToString:;
- (BOOL)isEqual:;
- (id)OIDBytes;
- (BOOL)setAsn1OidFromOIDString:error:;
- (id)initWithString:error:;
- (id)initDigestOIDWithSignatureAlgorithm:error:;
- (id)initRSASignatureOIDWithDigestAlgorithm:error:;
- (id)initECSignatureOIDWithDigestAlgorithm:error:;
- (id)initSignatureOIDWithSecKeyAlgorithm:error:;
- (id)secKeyAlgorithm;
- (id)ccdigest;
- (id)initWithAsn1OID:error:;
- (id)OIDString;
- (id)Asn1OID;
+ (id)OIDWithString:error:;
+ (id)OIDWithString:;
+ (id)OIDWithData:;
+ (id)OIDWithData:error:;
+ (id)digestOIDWithSignatureAlgorithm:error:;
+ (id)signatureAlgorithmOIDWithSecKeyAlgorithm:error:;
+ (id)OIDWithAsn1OID:error:;
+ (id)RSASignatureOIDWithDigestAlgorithm:error:;
+ (id)ECSignatureOIDWithDigestAlgorithm:error:;
@end
