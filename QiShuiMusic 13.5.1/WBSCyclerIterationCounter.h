@interface WBSCyclerIterationCounter : NSObject
@property (nonatomic) Q iterationCount;
@property (nonatomic) Q maximumIterationCount;
@property (nonatomic) BOOL hasReachedMaximumIterationCount;
- (id)init;
- (unsigned long long)iterationCount;
- (id)initWithMaximumIterationCount:;
- (void)incrementIterationCount;
- (BOOL)hasReachedMaximumIterationCount;
- (unsigned long long)maximumIterationCount;
@end
