@interface AMapRoad : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) q distance;
@property (nonatomic) NSString direction;
@property (nonatomic) AMapGeoPoint location;
- (BOOL)ajo_validateValue:forKey:error:;
- (long long)distance;
- (id)direction;
- (id)init;
- (void)setDirection:;
- (void)setName:;
- (id)uid;
- (void)setDistance:;
- (void)setUid:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
+ (id)ajo_mapping;
@end
