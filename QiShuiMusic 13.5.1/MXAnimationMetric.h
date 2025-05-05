@interface MXAnimationMetric : MXMetric
@property (nonatomic) NSMeasurement scrollHitchTimeRatio;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithGlitchTimeRatio:;
- (id)scrollHitchTimeRatio;
+ (BOOL)supportsSecureCoding;
@end
