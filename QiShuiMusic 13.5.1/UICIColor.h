@interface UICIColor : UIColor
- (id)_rgbColor;
- (void)setFill;
- (void)setStroke;
- (id)initWithCIColor:;
- (void)set;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (unsigned long long)hash;
- (BOOL)getRed:green:blue:alpha:;
- (id)colorWithAlphaComponent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)CIColor;
@end
