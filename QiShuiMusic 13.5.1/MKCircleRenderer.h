@interface MKCircleRenderer : MKOverlayPathRenderer
@property (nonatomic) MKCircle circle;
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
- (BOOL)_canProvideVectorGeometry;
- (id)initWithCircle:;
- (id)circle;
- (void)_performInitialConfiguration;
- (void)strokePath:inContext:;
- (BOOL)overlayCanProvideVectorData:;
- (id)vectorDataForOverlay:;
- (void)_updateRenderColors;
- (id)_vectorData;
+ (Class)_mapkitLeafClass;
@end
