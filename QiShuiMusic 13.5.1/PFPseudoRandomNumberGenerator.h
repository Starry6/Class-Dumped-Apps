@interface PFPseudoRandomNumberGenerator : NSObject
@property (nonatomic) Q seed;
- (unsigned long long)seed;
- (id)init;
- (id)initWithSeed:;
- (void)setSeed:;
- (double)_next;
- (unsigned long long)nextUnsignedIntegerLessThan:;
@end
