@interface UIPointFIFO : NSObject
@property (nonatomic) UIPointFIFO nextFIFO;
- (void)dealloc;
- (void)flush;
- (void)clear;
- (void)addPoint:;
- (id)initWithFIFO:;
- (void)emitPoint:;
- (id)nextFIFO;
- (void)setNextFIFO:;
@end
