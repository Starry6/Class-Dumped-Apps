@interface CHBoxcarFilterPointFIFO : CHPointFIFO
@property (nonatomic) {vector<float __attribute__((ext_vector_type(4))) prevPoints;
@property (nonatomic) Q width;
@property (nonatomic) float spacing;
- (float)spacing;
- (void)setSpacing:;
- (void)setWidth:;
- (void)flush;
- (unsigned long long)width;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFIFO:width:;
- (void)emitAveragedPoint;
- (id)prevPoints;
- (void)setPrevPoints:;
- (id)initWithFIFO:width:spacing:;
@end
