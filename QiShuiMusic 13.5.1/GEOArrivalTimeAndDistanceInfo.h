@interface GEOArrivalTimeAndDistanceInfo : NSObject
@property (nonatomic) NSArray arrivalTimeInfo;
@property (nonatomic) double distanceRemainingToEndOfLeg;
@property (nonatomic) double distanceRemainingToEndOfRoute;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)arrivalTimeInfo;
- (void)setArrivalTimeInfo:;
- (double)distanceRemainingToEndOfLeg;
- (void)setDistanceRemainingToEndOfLeg:;
- (double)distanceRemainingToEndOfRoute;
- (void)setDistanceRemainingToEndOfRoute:;
+ (BOOL)supportsSecureCoding;
@end
