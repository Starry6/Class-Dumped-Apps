@interface UIDynamicSystemColor : UIDynamicColor
- (unsigned long long)hash;
- (id)_resolvedMaterialWithTraitCollection:;
- (void)_setColorsByThemeKey:;
- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:;
- (id)initWithName:colorsByThemeKey:;
- (id)description;
- (id)_colorsByThemeKey;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
