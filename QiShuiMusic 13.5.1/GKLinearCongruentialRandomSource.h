@interface GKLinearCongruentialRandomSource : GKRandomSource
@property (nonatomic) Q seed;
- (unsigned long long)seed;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (void)setSeed:;
- (id)copyWithZone:;
- (unsigned long long)nextIntWithUpperBound:;
- (unsigned long long)nextBits:;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;
+ (BOOL)supportsSecureCoding;
@end
