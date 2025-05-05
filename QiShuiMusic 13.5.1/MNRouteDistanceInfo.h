@interface MNRouteDistanceInfo : NSObject
@property (nonatomic) double distanceRemainingToEndOfLeg;
@property (nonatomic) double distanceRemainingToEndOfRoute;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (double)distanceRemainingToEndOfLeg;
- (double)distanceRemainingToEndOfRoute;
- (id)initWithDistanceRemainingToEndOfLeg:distanceRemainingToEndOfRoute:forLegIndex:forRouteID:;
+ (BOOL)supportsSecureCoding;
@end
