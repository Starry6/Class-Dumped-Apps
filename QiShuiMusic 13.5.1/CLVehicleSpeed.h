@interface CLVehicleSpeed : NSObject
@property (nonatomic) double speed;
@property (nonatomic) NSDate timestamp;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:;
- (double)speed;
- (void)encodeWithCoder:;
- (id)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)initWithClientVehicleSpeed:;
+ (BOOL)supportsSecureCoding;
@end
