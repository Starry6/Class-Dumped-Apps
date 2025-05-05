@interface GKShuffledDistribution : GKRandomDistribution
- (void)dealloc;
- (id)initWithRandomSource:lowestValue:highestValue:;
- (long long)nextInt;
- (float)uniformDistance;
- (void)setUniformDistance:;
- (id)initWithRandomSource:lowestValue:highestValue:delta:;
@end
