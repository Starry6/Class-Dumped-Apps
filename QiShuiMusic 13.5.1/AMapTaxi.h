@interface AMapTaxi : AMapSearchObject
@property (nonatomic) AMapGeoPoint origin;
@property (nonatomic) AMapGeoPoint destination;
@property (nonatomic) q distance;
@property (nonatomic) q duration;
@property (nonatomic) NSString sname;
@property (nonatomic) NSString tname;
- (BOOL)ajo_validateValue:forKey:error:;
- (void)setSname:;
- (void)setTname:;
- (id)sname;
- (id)tname;
- (long long)distance;
- (void)setDestination:;
- (void)setOrigin:;
- (void)setDistance:;
- (id)destination;
- (id)origin;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
+ (id)ajo_mapping;
@end
