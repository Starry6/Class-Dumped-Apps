@interface MXLocationActivityMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeBestAccuracyTime;
@property (nonatomic) NSMeasurement cumulativeBestAccuracyForNavigationTime;
@property (nonatomic) NSMeasurement cumulativeNearestTenMetersAccuracyTime;
@property (nonatomic) NSMeasurement cumulativeHundredMetersAccuracyTime;
@property (nonatomic) NSMeasurement cumulativeKilometerAccuracyTime;
@property (nonatomic) NSMeasurement cumulativeThreeKilometersAccuracyTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeBestAccuracyTimeMeasurement:cumulativeBestAccuracyForNavigationTimeMeasurement:nearestTenMetersAccuracyTimeMeasurement:hundredMetersAccuracyTimeMeasurement:kilometerAccuracyTimeMeasurement:threeKilometerAccuracyTimeMeasurement:;
- (id)cumulativeBestAccuracyTime;
- (id)cumulativeBestAccuracyForNavigationTime;
- (id)cumulativeNearestTenMetersAccuracyTime;
- (id)cumulativeHundredMetersAccuracyTime;
- (id)cumulativeKilometerAccuracyTime;
- (id)cumulativeThreeKilometersAccuracyTime;
+ (BOOL)supportsSecureCoding;
@end
