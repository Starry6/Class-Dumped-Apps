@interface MKOverlayPathView : MKOverlayView
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) NSInteger lineJoin;
@property (nonatomic) NSInteger lineCap;
@property (nonatomic) double miterLimit;
@property (nonatomic) double lineDashPhase;
@property (nonatomic) NSArray lineDashPattern;
@property (nonatomic) ^{CGPath=} path;
- (id)path;
- (void)setLineWidth:;
- (id)fillColor;
- (double)lineWidth;
- (void)dealloc;
- (void)setStrokeColor:;
- (void)setFillColor:;
- (void)createPath;
- (void)setPath:;
- (id)strokeColor;
- (id)initWithOverlay:;
- (void).cxx_destruct;
- (double)miterLimit;
- (void)setMiterLimit:;
- (int)lineJoin;
- (void)setLineJoin:;
- (int)lineCap;
- (void)setLineCap:;
- (id)lineDashPattern;
- (void)setLineDashPattern:;
- (double)lineDashPhase;
- (void)setLineDashPhase:;
- (void)drawMapRect:zoomScale:inContext:;
- (void)_performInitialConfiguration;
- (void)invalidatePath;
- (void)applyStrokePropertiesToContext:atZoomScale:;
- (void)applyFillPropertiesToContext:atZoomScale:;
- (void)strokePath:inContext:;
- (void)fillPath:inContext:;
- (BOOL)canDrawMapRect:zoomScale:;
@end
