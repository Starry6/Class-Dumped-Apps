@interface AMapRouteSearchBaseRequest : AMapSearchObject
@property (nonatomic) AMapGeoPoint origin;
@property (nonatomic) AMapGeoPoint destination;
- (void)setDestination:;
- (void)setOrigin:;
- (id)destination;
- (id)origin;
- (void).cxx_destruct;
+ (id)ajo_mapping;
@end
