@interface ARCoachingHeuristicTracking : ARCoachingHeuristic
- (BOOL)satisfied;
- (long long)requirements;
- (void)updateWithFrame:cache:;
@end
