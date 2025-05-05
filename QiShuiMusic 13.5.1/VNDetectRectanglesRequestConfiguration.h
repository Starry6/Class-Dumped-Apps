@interface VNDetectRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q requiredVersion;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) float minimumSize;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) Q maximumObservations;
- (void)setMinimumSize:;
- (unsigned long long)requiredVersion;
- (float)minimumSize;
- (void)setMinimumConfidence:;
- (void)setRequiredVersion:;
- (id)initWithRequestClass:;
- (float)minimumConfidence;
- (id)copyWithZone:;
- (void)setQuadratureTolerance:;
- (void)setMaximumAspectRatio:;
- (void)setMaximumObservations:;
- (void)setMinimumAspectRatio:;
- (float)minimumAspectRatio;
- (float)maximumAspectRatio;
- (float)quadratureTolerance;
- (unsigned long long)maximumObservations;
@end
