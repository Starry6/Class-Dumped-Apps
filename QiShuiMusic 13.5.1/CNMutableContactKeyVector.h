@interface CNMutableContactKeyVector : CNContactKeyVector
- (void)intersectKeyVector:;
- (id)init;
- (void)minusKeyVector:;
- (void)subtractKeys:;
- (void)addKeys:;
- (void)addKey:;
- (id)freeze;
- (void)unionKeyVector:;
- (id)initWithKeyVector:;
- (void)subtractKey:;
- (id)copyWithZone:;
+ (id)new;
+ (id)freezeIfClassIsImmutable:;
@end
