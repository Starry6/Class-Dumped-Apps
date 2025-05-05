@interface GEOComposedRouteEVStepInfo : NSObject
@property (nonatomic) I remainingBatteryCharge;
@property (nonatomic) I remainingBatteryPercentage;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned int)remainingBatteryPercentage;
- (unsigned int)remainingBatteryCharge;
- (id)initWithEVStateInfo:;
+ (BOOL)supportsSecureCoding;
@end
