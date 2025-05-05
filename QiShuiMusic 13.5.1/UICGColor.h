@interface UICGColor : UIColor
- (void)setFill;
- (BOOL)_isDeepColor;
- (void)dealloc;
- (void)setStroke;
- (id)colorSpaceName;
- (void)set;
- (id)initWithCGColor:;
- (BOOL)getHue:saturation:brightness:alpha:;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (unsigned long long)hash;
- (BOOL)getRed:green:blue:alpha:;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:;
- (BOOL)isPatternColor;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
