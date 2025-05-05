@interface GKSystemArc4RandomSource : GKRandomSource
- (id)copyWithZone:;
- (unsigned long long)nextIntWithUpperBound:;
- (long long)nextInt;
@end
