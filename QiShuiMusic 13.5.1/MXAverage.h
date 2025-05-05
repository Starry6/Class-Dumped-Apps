@interface MXAverage : NSObject
@property (nonatomic) NSMeasurement averageMeasurement;
@property (nonatomic) q sampleCount;
@property (nonatomic) double standardDeviation;
- (long long)sampleCount;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)standardDeviation;
- (id)initWithMeasurement:sampleCount:standardDeviation:;
- (id)initWithDoubleValue:sampleCount:standardDeviation:unit:;
- (id)averageMeasurement;
+ (BOOL)supportsSecureCoding;
@end
