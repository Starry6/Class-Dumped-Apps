@interface MXCellularConditionMetric : MXMetric
@property (nonatomic) MXHistogram histogrammedCellularConditionTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCellularConditionTime:;
- (id)histogrammedCellularConditionTime;
+ (BOOL)supportsSecureCoding;
@end
