@interface UIDynamicColor : UIColor
- (void)setFill;
- (BOOL)_isDeepColor;
- (void)setStroke;
- (BOOL)_isDynamic;
- (id)colorSpaceName;
- (void)set;
- (BOOL)getHue:saturation:brightness:alpha:;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (BOOL)getRed:green:blue:alpha:;
- (double)alphaComponent;
- (id)_resolvedMaterialWithTraitCollection:;
- (id)resolvedColorWithTraitCollection:;
- (id)colorWithAlphaComponent:;
- (BOOL)isPatternColor;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_resolvedColorWithTraitCollection:;
- (id)_highContrastDynamicColor;
@end
