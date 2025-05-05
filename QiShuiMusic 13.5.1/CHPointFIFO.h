@interface CHPointFIFO : NSObject
@property (nonatomic) CHPointFIFO nextFIFO;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:;
- (void)emitPoint:;
- (id)nextFIFO;
- (void)setNextFIFO:;
@end
