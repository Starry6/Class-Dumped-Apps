@interface VNDetectionprintObservation : VNObservation
@property (nonatomic) VNDetectionprint detectionprint;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:detectionprint:;
- (id)detectionprint;
+ (BOOL)supportsSecureCoding;
@end
