@interface GKARC4RandomSource : GKRandomSource
@property (nonatomic) NSData seed;
- (id)seed;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSeed:;
- (void)setSeed:;
- (id)copyWithZone:;
- (unsigned long long)nextIntWithUpperBound:;
- (unsigned long long)nextBits:;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;
- (void)dropValuesWithCount:;
+ (BOOL)supportsSecureCoding;
@end
