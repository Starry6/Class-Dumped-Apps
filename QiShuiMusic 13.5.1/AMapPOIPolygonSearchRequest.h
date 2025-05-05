@interface AMapPOIPolygonSearchRequest : AMapPOISearchBaseRequest
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString keywords;
@property (nonatomic) AMapGeoPolygon polygon;
- (id)checkParameters;
- (id)init;
+ (id)ajo_mapping;
@end
