@interface MADVIRectangleDetectionRequest : MADRequest
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) float minimumSize;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) Q maximumObservations;
- (void)setMinimumSize:;
- (id)init;
- (id)initWithCoder:;
- (float)minimumSize;
- (void)setMinimumConfidence:;
- (void)encodeWithCoder:;
- (id)description;
- (float)minimumConfidence;
- (void)setQuadratureTolerance:;
- (void)setMaximumAspectRatio:;
- (void)setMaximumObservations:;
- (void)setMinimumAspectRatio:;
- (float)minimumAspectRatio;
- (float)maximumAspectRatio;
- (float)quadratureTolerance;
- (unsigned long long)maximumObservations;
+ (BOOL)supportsSecureCoding;
@end
