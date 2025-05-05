@interface UIPatternCGColor : UICGColor
- (void)dealloc;
- (id)colorSpaceName;
- (id)initWithCGColor:;
- (BOOL)getHue:saturation:brightness:alpha:;
- (BOOL)getWhite:alpha:;
- (BOOL)getRed:green:blue:alpha:;
- (BOOL)isPatternColor;
- (id)description;
@end
