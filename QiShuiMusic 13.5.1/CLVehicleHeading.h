@interface CLVehicleHeading : NSObject
@property (nonatomic) double trueHeading;
@property (nonatomic) NSDate timestamp;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)timestamp;
- (id)description;
- (id)copyWithZone:;
- (double)trueHeading;
- (id)initWithClientVehicleHeading:;
+ (BOOL)supportsSecureCoding;
@end
