@interface MXDiskIOMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeLogicalWrites;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeLogicalWritesMeasurement:;
- (id)cumulativeLogicalWrites;
+ (BOOL)supportsSecureCoding;
@end
