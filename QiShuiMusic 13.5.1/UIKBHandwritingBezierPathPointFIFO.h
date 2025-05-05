@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO
@property (nonatomic) NSMutableArray prevPoints;
@property (nonatomic) UIBezierPath path;
@property (nonatomic) @? emissionHandler;
- (id)path;
- (void)setPath:;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:;
- (id)prevPoints;
- (void)setPrevPoints:;
- (id)emissionHandler;
- (void)setEmissionHandler:;
@end
