@interface MKPolyline : MKMultiPoint
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) {?={?=dd}{?=dd}} boundingMapRect;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)boundingMapRect;
- (id)_initWithGeoJSONObject:error:;
- (id)coordinate;
- (BOOL)intersectsMapRect:;
- (void)_calculateBounds;
- (id)_initWithGeoJSONPoints:error:;
+ (id)polylineWithPoints:count:;
+ (id)polylineWithCoordinates:count:;
+ (id)polylineWithCoordinates:elevations:count:;
@end
