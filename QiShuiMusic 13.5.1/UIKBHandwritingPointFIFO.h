@interface UIKBHandwritingPointFIFO : NSObject
@property (nonatomic) UIKBHandwritingPointFIFO nextFIFO;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (void).cxx_destruct;
- (id)initWithFIFO:;
- (void)emitPoint:;
- (id)nextFIFO;
- (void)setNextFIFO:;
@end
