@interface NLNumberGenerator : NSObject
- (id)init;
- (void)reset;
- (void)resetWithSeed:;
- (unsigned long long)numberInRange:;
@end
