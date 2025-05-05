@interface MKMultiPolygon : MKShape
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray polygons;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) {?={?=dd}{?=dd}} boundingMapRect;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)polygons;
- (id)boundingMapRect;
- (id)_initWithGeoJSONObject:error:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)initWithPolygons:;
@end
