@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO
@property (nonatomic) double scale;
@property (nonatomic) NSMutableArray prevPoints;
@property (nonatomic) {?={CGPoint=dd}d} lastPoint;
@property (nonatomic) @? emissionHandler;
- (void)setScale:;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (double)scale;
- (id)prevPoints;
- (void)setPrevPoints:;
- (id)initWithFIFO:scale:;
- (id)emissionHandler;
- (void)setEmissionHandler:;
- (id)lastPoint;
- (void)setLastPoint:;
@end
