@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric
@property (nonatomic) q metricType;
- (void)setMetricType:;
- (id)initWithCoder:;
- (long long)metricType;
- (void)encodeWithCoder:;
- (id)initWithType:enhancedLinkQuality:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
