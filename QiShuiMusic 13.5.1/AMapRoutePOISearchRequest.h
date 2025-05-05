@interface AMapRoutePOISearchRequest : AMapSearchObject
@property (nonatomic) AMapGeoPoint origin;
@property (nonatomic) AMapGeoPoint destination;
@property (nonatomic) q searchType;
@property (nonatomic) q strategy;
@property (nonatomic) q range;
@property (nonatomic) NSString polylineStr;
@property (nonatomic) NSArray polyline;
- (void)setPolylineStr:;
- (id)polylineStr;
- (long long)searchType;
- (void)setDestination:;
- (void)setSearchType:;
- (id)init;
- (void)setOrigin:;
- (long long)strategy;
- (void)setRange:;
- (id)types;
- (id)destination;
- (id)origin;
- (long long)range;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)polyline;
- (void)setPolyline:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
