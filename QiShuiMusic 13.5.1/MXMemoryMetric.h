@interface MXMemoryMetric : MXMetric
@property (nonatomic) NSMeasurement peakMemoryUsage;
@property (nonatomic) MXAverage averageSuspendedMemory;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)peakMemoryUsage;
- (id)initWithPeakMemoryUsageMeasurement:averageMemoryUsageMeasurement:;
- (id)averageSuspendedMemory;
+ (BOOL)supportsSecureCoding;
@end
