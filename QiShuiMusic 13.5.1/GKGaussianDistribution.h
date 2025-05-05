@interface GKGaussianDistribution : GKRandomDistribution
@property (nonatomic) float mean;
@property (nonatomic) float deviation;
- (float)deviation;
- (float)mean;
- (id)initWithRandomSource:lowestValue:highestValue:;
- (long long)nextInt;
- (id)initWithRandomSource:mean:deviation:;
@end
