@interface MNBatteryChargeInfo : NSObject
@property (nonatomic) double batteryChargeRemainingAtEndOfLeg;
@property (nonatomic) double batteryChargeRemainingAtEndOfRoute;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithBatteryChargeRemainingAtEndOfLeg:batteryChargeRemainingAtEndOfRoute:forLegIndex:forRouteID:;
- (double)batteryChargeRemainingAtEndOfLeg;
- (double)batteryChargeRemainingAtEndOfRoute;
+ (BOOL)supportsSecureCoding;
@end
