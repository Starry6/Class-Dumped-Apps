@interface UIDynamicAppDefinedColor : UIDynamicColor
- (unsigned long long)hash;
- (id)_generateColorsByTraitCollection;
- (id)_initWithColorsByThemeKey:;
- (id)initWithColorsByTraitCollection:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
