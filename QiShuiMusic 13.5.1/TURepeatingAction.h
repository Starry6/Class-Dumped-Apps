@interface TURepeatingAction : NSObject
@property (nonatomic) @? action;
@property (nonatomic) @? completion;
@property (nonatomic) Q remainingIterations;
@property (nonatomic) double pauseDuration;
- (id)completion;
- (id)initWithAction:;
- (void)setCompletion:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (unsigned long long)remainingIterations;
- (void)setRemainingIterations:;
- (double)pauseDuration;
- (void)setPauseDuration:;
@end
