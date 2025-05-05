@interface GEOComposedETARouteLeg : NSObject
@property (nonatomic) Q originalLegIndex;
@property (nonatomic) double length;
@property (nonatomic) NSArray steps;
@property (nonatomic) GEOComposedRouteEVChargingStationInfo chargingStationInfo;
@property (nonatomic) double travelDuration;
- (id)steps;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)length;
- (void)setSteps:;
- (void)setLength:;
- (double)travelDuration;
- (id)chargingStationInfo;
- (void)setChargingStationInfo:;
- (id)descriptionWithPrecision:;
- (unsigned long long)originalLegIndex;
- (void)setOriginalLegIndex:;
+ (BOOL)supportsSecureCoding;
@end
