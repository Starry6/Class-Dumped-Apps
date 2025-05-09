@interface AMapRailway : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString trip;
@property (nonatomic) NSString type;
@property (nonatomic) q distance;
@property (nonatomic) q time;
@property (nonatomic) AMapRailwayStation departureStation;
@property (nonatomic) AMapRailwayStation arrivalStation;
@property (nonatomic) NSArray spaces;
@property (nonatomic) NSArray viaStops;
@property (nonatomic) NSArray alters;
- (id)alters;
- (id)arrivalStation;
- (id)departureStation;
- (void)setAlters:;
- (void)setArrivalStation:;
- (void)setDepartureStation:;
- (void)setSpaces:;
- (void)setViaStops:;
- (id)viaStops;
- (long long)distance;
- (void)setTime:;
- (void)setName:;
- (long long)time;
- (id)uid;
- (void)setDistance:;
- (void)setUid:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)name;
- (id)spaces;
- (id)trip;
- (void)setTrip:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
