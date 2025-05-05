@interface MXSignpostIntervalData : NSObject
@property (nonatomic) NSMeasurementFormatter measurementFormatter;
@property (nonatomic) MXHistogram histogrammedSignpostDuration;
@property (nonatomic) NSMeasurement cumulativeCPUTime;
@property (nonatomic) MXAverage averageMemory;
@property (nonatomic) NSMeasurement cumulativeLogicalWrites;
@property (nonatomic) NSMeasurement cumulativeHitchTimeRatio;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)measurementFormatter;
- (void)setMeasurementFormatter:;
- (id)initWithHistogramDurationData:withCumulativeCPUTime:withAverageMemory:withCumulativeLogicalWrites:withCumulativeHitchTimeRatio:;
- (id)cumulativeCPUTime;
- (id)cumulativeLogicalWrites;
- (id)initWithHistogramDurationData:withCumulativeCPUTime:withAverageMemory:withCumulativeLogicalWrites:;
- (id)initWithHistogramDurationData:withCumulativeCPUTime:withPeakMemory:withAverageMemory:withCumulativeLogicalWrites:;
- (id)histogrammedSignpostDuration;
- (id)averageMemory;
- (id)cumulativeHitchTimeRatio;
+ (BOOL)supportsSecureCoding;
@end
