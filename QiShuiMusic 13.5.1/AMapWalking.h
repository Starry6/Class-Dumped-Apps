@interface AMapWalking : AMapSearchObject
@property (nonatomic) AMapGeoPoint origin;
@property (nonatomic) AMapGeoPoint destination;
@property (nonatomic) q distance;
@property (nonatomic) q duration;
@property (nonatomic) NSArray steps;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)steps;
- (long long)distance;
- (void)setDestination:;
- (void)setOrigin:;
- (void)setDistance:;
- (id)destination;
- (id)origin;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setSteps:;
- (long long)duration;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
