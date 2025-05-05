@interface UIDynamicProviderColor : UIDynamicColor
- (id)initWithProvider:;
- (unsigned long long)hash;
- (id)replacementObjectForCoder:;
- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
