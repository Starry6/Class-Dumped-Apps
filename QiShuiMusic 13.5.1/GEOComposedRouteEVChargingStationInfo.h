@interface GEOComposedRouteEVChargingStationInfo : NSObject
@property (nonatomic) Q muid;
@property (nonatomic) NSString name;
@property (nonatomic) double chargingTime;
@property (nonatomic) double batteryChargeAfterCharging;
@property (nonatomic) double batteryPercentageAfterCharging;
- (id)init;
- (unsigned long long)muid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (double)chargingTime;
- (double)batteryPercentageAfterCharging;
- (double)batteryChargeAfterCharging;
- (id)initWithGeoEVChargingInfo:muid:name:;
+ (BOOL)supportsSecureCoding;
@end
