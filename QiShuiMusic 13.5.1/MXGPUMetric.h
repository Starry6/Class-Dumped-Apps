@interface MXGPUMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeGPUTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeGPUTimeMeasurement:;
- (id)cumulativeGPUTime;
+ (BOOL)supportsSecureCoding;
@end
