@interface GKRandomDistribution : NSObject
@property (nonatomic) q lowestValue;
@property (nonatomic) q highestValue;
@property (nonatomic) Q numberOfPossibleOutcomes;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)nextIntWithUpperBound:;
- (id)initWithRandomSource:lowestValue:highestValue:;
- (long long)lowestValue;
- (long long)highestValue;
- (unsigned long long)numberOfPossibleOutcomes;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;
+ (id)distributionWithLowestValue:highestValue:;
+ (id)distributionForDieWithSideCount:;
+ (id)d6;
+ (id)d20;
@end
