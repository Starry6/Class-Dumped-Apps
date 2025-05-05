@interface MKPolygonRenderer : MKOverlayPathRenderer
@property (nonatomic) MKPolygon polygon;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;
- (void)setLineWidth:;
- (void)setStrokeColor:;
- (void)setFillColor:;
- (void)createPath;
- (void)setAlpha:;
- (void).cxx_destruct;
- (double)strokeStart;
- (void)setStrokeStart:;
- (double)strokeEnd;
- (void)setStrokeEnd:;
- (void)setMiterLimit:;
- (void)setLineJoin:;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)strokePath:inContext:;
- (void)fillPath:inContext:;
- (BOOL)overlayCanProvideVectorData:;
- (id)vectorDataForOverlay:;
- (void)_updateRenderColors;
- (id)initWithPolygon:;
- (id)polygon;
- (id)_vectorGeometry;
+ (Class)_mapkitLeafClass;
@end
