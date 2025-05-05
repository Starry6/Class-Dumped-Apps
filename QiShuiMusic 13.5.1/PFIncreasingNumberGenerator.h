@interface PFIncreasingNumberGenerator : NSObject
@property (nonatomic) Q seed;
- (unsigned long long)seed;
- (id)init;
- (id)initWithSeed:;
- (void)setSeed:;
- (unsigned long long)nextUnsignedIntegerLessThan:;
@end
