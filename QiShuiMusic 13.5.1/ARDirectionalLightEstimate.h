@interface ARDirectionalLightEstimate : ARLightEstimate
@property (nonatomic) double timestamp;
@property (nonatomic) double confidenceRating;
@property (nonatomic) NSData sphericalHarmonicsCoefficients;
@property (nonatomic)  primaryLightDirection;
@property (nonatomic) double primaryLightIntensity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)sphericalHarmonicsCoefficients;
- (id)initWithSphericalHarmonics:ambientIntensity:temperature:;
- (id)initWithDirectionalLightEstimate:;
- (id)lightEstimateByApplyingRotation:;
- (id)primaryLightDirection;
- (double)primaryLightIntensity;
- (double)confidenceRating;
- (void)setConfidenceRating:;
+ (BOOL)supportsSecureCoding;
@end
