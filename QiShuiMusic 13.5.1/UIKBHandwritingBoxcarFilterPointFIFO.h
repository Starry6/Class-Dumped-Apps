@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO
@property (nonatomic) NSMutableArray prevPoints;
@property (nonatomic) Q width;
- (void)setWidth:;
- (void)flush;
- (unsigned long long)width;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:width:;
- (void)emitAveragedPoint;
- (id)prevPoints;
- (void)setPrevPoints:;
@end
