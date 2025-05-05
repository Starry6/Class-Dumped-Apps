@interface UIBoxcarFilterPointFIFO : UIPointFIFO
@property (nonatomic) Q width;
@property (nonatomic) float spacing;
@property (nonatomic) _UIPointVector prevPoints;
- (float)spacing;
- (void)setSpacing:;
- (void)dealloc;
- (void)setWidth:;
- (void)flush;
- (unsigned long long)width;
- (void)clear;
- (void)addPoint:;
- (id)initWithFIFO:width:;
- (void)emitAveragedPoint;
- (id)prevPoints;
- (void)setPrevPoints:;
- (id)initWithFIFO:width:spacing:;
@end
