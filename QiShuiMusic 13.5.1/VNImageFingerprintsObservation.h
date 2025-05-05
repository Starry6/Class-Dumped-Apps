@interface VNImageFingerprintsObservation : VNObservation
@property (nonatomic) NSArray fingerprintHashes;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithOriginatingRequestSpecifier:fingerprintHashes:;
- (id)fingerprintHashes;
+ (BOOL)supportsSecureCoding;
@end
