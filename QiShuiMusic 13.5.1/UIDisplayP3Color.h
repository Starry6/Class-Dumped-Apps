@interface UIDisplayP3Color : UIColor
- (void)setFill;
- (BOOL)_isDeepColor;
- (id)_createCGColorWithAlpha:;
- (void)dealloc;
- (void)setStroke;
- (id)colorSpaceName;
- (void)set;
- (BOOL)getHue:saturation:brightness:alpha:;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (unsigned long long)hash;
- (BOOL)getRed:green:blue:alpha:;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDisplayP3Red:green:blue:alpha:;
@end
