@interface MKPolylineRenderer : MKOverlayPathRenderer
@property (nonatomic) MKPolyline polyline;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;
- (void)setLineWidth:;
- (void)setStrokeColor:;
- (void)createPath;
- (void)setAlpha:;
- (void).cxx_destruct;
- (double)strokeStart;
- (void)setStrokeStart:;
- (double)strokeEnd;
- (void)setStrokeEnd:;
- (void)setMiterLimit:;
- (void)setLineJoin:;
- (void)setLineCap:;
- (BOOL)_canProvideVectorGeometry;
- (void)_updateVectorGeometry:;
- (void)drawMapRect:zoomScale:inContext:;
- (id)polyline;
- (void)_performInitialConfiguration;
- (BOOL)overlayCanProvideVectorData:;
- (id)vectorDataForOverlay:;
- (void)_updateRenderColors;
- (id)initWithPolyline:;
- (id)_vectorGeometry;
- (void)_setNeedsVectorGeometryUpdate;
+ (Class)_mapkitLeafClass;
@end
