@interface AMapRoutePOI : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) q distance;
@property (nonatomic) q duration;
- (BOOL)ajo_validateValue:forKey:error:;
- (long long)distance;
- (id)init;
- (void)setName:;
- (id)uid;
- (void)setDistance:;
- (void)setUid:;
- (id)location;
- (void)setDuration:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
- (long long)duration;
+ (id)ajo_mapping;
@end
