@interface AMapDrivingRouteSearchRequest : AMapRouteSearchBaseRequest
@property (nonatomic) q strategy;
@property (nonatomic) NSArray waypoints;
@property (nonatomic) NSArray avoidpolygons;
@property (nonatomic) NSString avoidroad;
@property (nonatomic) NSString originId;
@property (nonatomic) NSString destinationId;
@property (nonatomic) NSString origintype;
@property (nonatomic) NSString destinationtype;
@property (nonatomic) BOOL requireExtension;
@property (nonatomic) NSString plateProvince;
@property (nonatomic) NSString plateNumber;
@property (nonatomic) q ferry;
@property (nonatomic) q cartype;
@property (nonatomic) q exclude;
- (void)setPlateNumber:;
- (long long)cartype;
- (id)destinationtype;
- (id)avoidpolygons;
- (id)avoidroad;
- (long long)ferry;
- (id)origintype;
- (id)plateNumber;
- (id)plateProvince;
- (BOOL)requireExtension;
- (void)setAvoidpolygons:;
- (void)setAvoidroad:;
- (void)setCartype:;
- (void)setDestinationId:;
- (void)setDestinationtype:;
- (void)setFerry:;
- (void)setOrigintype:;
- (void)setPlateProvince:;
- (void)setRequireExtension:;
- (id)stringFromAvoidPolygons;
- (id)stringFromExclude;
- (id)stringFromWayPoints;
- (id)init;
- (long long)strategy;
- (void)setWaypoints:;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)waypoints;
- (long long)exclude;
- (void)setExclude:;
- (id)destinationId;
- (id)originId;
- (void)setOriginId:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
