@interface AMapCloudPOIPolygonSearchRequest : AMapCloudSearchBaseRequest
@property (nonatomic) AMapGeoPolygon polygon;
@property (nonatomic) NSString keywords;
- (id)keywords;
- (void)setKeywords:;
- (void).cxx_destruct;
- (id)description;
- (id)polygon;
- (void)setPolygon:;
@end
