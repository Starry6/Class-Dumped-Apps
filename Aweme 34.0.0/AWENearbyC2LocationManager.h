@interface AWENearbyC2LocationManager : NSObject
@property (nonatomic) AWELocationServicePersistModel locationPermissionModel;
@property (nonatomic) Q locationStatus;
- (void)updateLocationPermissionWithModel:status:error:;
- (void)cacluteStaticRefreshDistanceWithResponse:pageType:;
- (id)handleLocationInfo;
- (BOOL)grouponLocationOptEnable;
- (void)setLocationPermissionModel:;
- (BOOL)checkLocationInfoValidWithDic:;
- (id)locationPermissionModel;
- (void).cxx_destruct;
- (unsigned long long)locationStatus;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setLocationStatus:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
