@interface MKMultiPolylineRenderer : MKOverlayPathRenderer
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;
@property (nonatomic) MKMultiPolyline multiPolyline;
- (void)setLineWidth:;
- (void)setStrokeColor:;
- (void)createPath;
- (void)setAlpha:;
- (void).cxx_destruct;
- (void)setMiterLimit:;
- (void)setLineJoin:;
- (void)setLineCap:;
- (BOOL)_canProvideVectorGeometry;
- (void)drawMapRect:zoomScale:inContext:;
- (void)_performInitialConfiguration;
- (BOOL)overlayCanProvideVectorData:;
- (id)vectorDataForOverlay:;
- (void)_updateRenderColors;
- (double)_strokeStart;
- (double)_strokeEnd;
- (void)_setStrokeStart:;
- (void)_setStrokeEnd:;
- (id)_vectorGeometry;
- (id)initWithMultiPolyline:;
- (id)multiPolyline;
+ (Class)_mapkitLeafClass;
@end
