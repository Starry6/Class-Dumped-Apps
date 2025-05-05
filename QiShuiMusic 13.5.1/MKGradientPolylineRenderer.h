@interface MKGradientPolylineRenderer : MKPolylineRenderer
@property (nonatomic) NSArray locations;
@property (nonatomic) NSArray colors;
- (id)colors;
- (id)locations;
- (void).cxx_destruct;
- (BOOL)_canProvideVectorGeometry;
- (void)_updateVectorGeometry:;
- (void)drawMapRect:zoomScale:inContext:;
- (void)_updateColorStops;
- (void)setColors:atLocations:;
+ (Class)_mapkitLeafClass;
@end
