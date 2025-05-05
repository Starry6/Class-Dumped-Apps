@interface AMapNearbySearchRequest : AMapSearchObject
@property (nonatomic) AMapGeoPoint center;
@property (nonatomic) q radius;
@property (nonatomic) q searchType;
@property (nonatomic) q timeRange;
@property (nonatomic) q limit;
- (id)center;
- (long long)searchType;
- (void)setRadius:;
- (long long)timeRange;
- (long long)limit;
- (void)setSearchType:;
- (id)init;
- (void)setCenter:;
- (long long)radius;
- (void)setTimeRange:;
- (void)setLimit:;
- (void).cxx_destruct;
+ (id)ajo_mapping;
@end
