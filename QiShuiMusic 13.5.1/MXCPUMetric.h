@interface MXCPUMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeCPUTime;
@property (nonatomic) NSMeasurement cumulativeCPUInstructions;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeCPUTimeMeasurement:withCumulativeCPUInstructions:;
- (id)cumulativeCPUTime;
- (id)initWithCumulativeCPUTimeMeasurement:;
- (id)initWithCumulativeCPUTimeMeasurement:withCumulativeCPUInstructions:withCumulativeForegroundCPUTimeMeasurement:withCumulativeBackgroundCPUTimeMeasurement:;
- (id)cumulativeCPUInstructions;
+ (BOOL)supportsSecureCoding;
@end
