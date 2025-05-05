@interface MXAppResponsivenessMetric : MXMetric
@property (nonatomic) MXHistogram histogrammedApplicationHangTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAppResponsivenessData:;
- (id)histogrammedApplicationHangTime;
+ (BOOL)supportsSecureCoding;
@end
