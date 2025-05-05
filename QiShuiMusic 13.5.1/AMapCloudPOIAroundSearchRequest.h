@interface AMapCloudPOIAroundSearchRequest : AMapCloudSearchBaseRequest
@property (nonatomic) AMapGeoPoint center;
@property (nonatomic) q radius;
@property (nonatomic) NSString keywords;
- (id)keywords;
- (void)setKeywords:;
- (id)center;
- (void)setRadius:;
- (id)init;
- (void)setCenter:;
- (long long)radius;
- (void).cxx_destruct;
- (id)description;
@end
