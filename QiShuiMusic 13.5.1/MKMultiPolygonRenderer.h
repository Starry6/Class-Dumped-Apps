@interface MKMultiPolygonRenderer : MKOverlayPathRenderer
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;
@property (nonatomic) MKMultiPolygon multiPolygon;
- (void)setLineWidth:;
- (void)dealloc;
- (void)setStrokeColor:;
- (void)setFillColor:;
- (void)createPath;
- (void)setAlpha:;
- (void).cxx_destruct;
- (void)setMiterLimit:;
- (void)setLineJoin:;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)strokePath:inContext:;
- (void)fillPath:inContext:;
- (BOOL)overlayCanProvideVectorData:;
- (id)vectorDataForOverlay:;
- (void)_updateRenderColors;
- (id)initWithMultiPolygon:;
- (id)multiPolygon;
- (double)_strokeStart;
- (double)_strokeEnd;
- (void)_setStrokeStart:;
- (void)_setStrokeEnd:;
- (id)_vectorGeometry;
+ (Class)_mapkitLeafClass;
@end
