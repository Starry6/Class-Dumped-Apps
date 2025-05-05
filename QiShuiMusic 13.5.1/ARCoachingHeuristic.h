@interface ARCoachingHeuristic : NSObject
@property (nonatomic) BOOL satisfied;
@property (nonatomic) q requirements;
- (BOOL)satisfied;
- (void)setSatisfied:;
- (long long)requirements;
- (void)updateWithFrame:cache:;
@end
