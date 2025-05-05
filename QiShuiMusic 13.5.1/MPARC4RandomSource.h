@interface MPARC4RandomSource : NSObject
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
+ (BOOL)supportsSecureCoding;
@end
