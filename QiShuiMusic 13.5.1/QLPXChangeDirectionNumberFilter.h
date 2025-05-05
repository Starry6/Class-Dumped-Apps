@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter
@property (nonatomic) double minimumChange;
- (id)initWithInput:;
- (double)updatedOutput;
- (double)initialOutputForInput:;
- (double)minimumChange;
- (void)setMinimumChange:;
@end
