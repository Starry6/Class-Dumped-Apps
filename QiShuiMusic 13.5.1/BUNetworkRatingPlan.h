@interface BUNetworkRatingPlan : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSArray steps;
@property (nonatomic) q stepIndex;
- (id)initWithJsonDict:;
- (id)steps;
- (id)lock;
- (void).cxx_destruct;
- (void)reset;
- (long long)stepIndex;
- (void)setLock:;
- (id)nextStep;
@end
