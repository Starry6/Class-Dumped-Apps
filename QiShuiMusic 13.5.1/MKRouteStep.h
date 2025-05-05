@interface MKRouteStep : NSObject
@property (nonatomic) GEOComposedRouteStep geoComposedRouteStep;
@property (nonatomic) NSString instructions;
@property (nonatomic) NSString notice;
@property (nonatomic) MKPolyline polyline;
@property (nonatomic) double distance;
@property (nonatomic) Q transportType;
- (double)distance;
- (unsigned long long)transportType;
- (void).cxx_destruct;
- (id)instructions;
- (id)notice;
- (id)polyline;
- (id)_initWithGEOComposedRouteStep:instructions:transportType:polyline:;
- (id)_geoComposedRouteStep;
@end
