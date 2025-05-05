@interface SignpostCAIntervalAggregationStats : NSObject
@property (nonatomic) Q intervalCount;
@property (nonatomic) Q totalIntervalDurationNs;
@property (nonatomic) float averageIntervalDurationNs;
@property (nonatomic) float maxIntervalDurationNs;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)intervalCount;
- (void)_addAggregationStats:;
- (float)averageIntervalDurationNs;
- (void)_addDurationNsToAggregation:;
- (unsigned long long)totalIntervalDurationNs;
- (float)maxIntervalDurationNs;
@end
