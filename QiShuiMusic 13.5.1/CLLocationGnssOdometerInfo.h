@interface CLLocationGnssOdometerInfo : NSObject
@property (nonatomic) double odometer;
@property (nonatomic) double deltaDistance;
@property (nonatomic) double deltaDistanceAccuracy;
- (double)odometer;
- (double)deltaDistanceAccuracy;
- (id)initWithCoder:;
- (double)deltaDistance;
- (void)encodeWithCoder:;
- (id)initWithOdometer:deltaDistance:deltaDistanceAccuracy:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
