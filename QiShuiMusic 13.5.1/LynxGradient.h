@interface LynxGradient : NSObject
@property (nonatomic) NSMutableArray colors;
@property (nonatomic) ^d positions;
@property (nonatomic) Q positionCount;
- (void)draw:withPath:;
- (void)draw:withRect:;
- (id)initWithColors:stops:;
- (void)setPositionCount:;
- (void)setPositions:;
- (id)colors;
- (void)setColors:;
- (void)dealloc;
- (BOOL)isEqualTo:;
- (void).cxx_destruct;
- (id)positions;
- (unsigned long long)positionCount;
@end
