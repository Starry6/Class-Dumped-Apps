@interface GLKHashableBigInt : NSObject
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithBigInt:;
@end
