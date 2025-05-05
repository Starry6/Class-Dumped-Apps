@interface AMapGeoPolygon : AMapSearchObject
@property (nonatomic) NSArray points;
- (id)coordinateString;
- (void).cxx_destruct;
- (id)description;
- (id)points;
- (void)setPoints:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
+ (id)polygonWithPoints:;
+ (id)polygonWithString:;
@end
