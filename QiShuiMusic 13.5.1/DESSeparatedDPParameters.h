@interface DESSeparatedDPParameters : NSObject
@property (nonatomic) q normBinCount;
@property (nonatomic) double maxNorm;
- (id)initWithRecipe:;
- (id)description;
- (double)maxNorm;
- (long long)normBinCount;
@end
