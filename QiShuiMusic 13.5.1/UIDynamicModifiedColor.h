@interface UIDynamicModifiedColor : UIDynamicColor
- (BOOL)_isDynamicTintColor;
- (unsigned long long)hash;
- (id)_resolvedMaterialWithTraitCollection:;
- (id)colorWithAlphaComponent:;
- (void)encodeWithCoder:;
- (id)_backgroundColorIgnoringHighContrast;
- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:;
- (id)_highContrastDynamicColor;
- (id)initWithBaseColor:alphaComponent:contrast:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
