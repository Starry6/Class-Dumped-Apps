@interface UITintColor : UIDynamicColor
- (void)setFill;
- (BOOL)_isDeepColor;
- (id)init;
- (void)setStroke;
- (BOOL)_isDynamicTintColor;
- (id)colorSpaceName;
- (void)set;
- (BOOL)getHue:saturation:brightness:alpha:;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (unsigned long long)hash;
- (BOOL)getRed:green:blue:alpha:;
- (double)alphaComponent;
- (BOOL)isPatternColor;
- (id)_resolvedColorWithTraitCollection:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
