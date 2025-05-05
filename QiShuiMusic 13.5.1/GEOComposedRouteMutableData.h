@interface GEOComposedRouteMutableData : NSObject
@property (nonatomic) GEOComposedRouteTraffic traffic;
@property (nonatomic) NSArray trafficDelayInfos;
@property (nonatomic) NSArray updateableCameraInfos;
- (id)initWithCoder:;
- (id)traffic;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setTraffic:;
- (id)description;
- (id)evInfoForStepID:;
- (id)chargingStationInfoForLegIndex:;
- (void)updateForRoute:;
- (void)updateForRoute:etaRoute:;
- (id)trafficDelayInfos;
- (void)setTrafficDelayInfos:;
- (id)updateableCameraInfos;
- (void)setUpdateableCameraInfos:;
+ (BOOL)supportsSecureCoding;
@end
