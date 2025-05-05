@interface BWMovingWindowStats : BWStats
@property (nonatomic) NSInteger windowSize;
- (int)windowSize;
- (void)dealloc;
- (void)addDataPoint:;
- (double)min;
- (id)initWithWindowSize:;
- (double)max;
- (id)description;
- (id)copyWithZone:;
@end
