@interface MTRGBColor : MTColor
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;
- (id)_rgbColor;
- (double)red;
- (id)initWithRed:green:blue:alpha:;
- (double)blue;
- (id)CGColor;
- (double)green;
- (id)colorDescription;
- (id)colorWithAlphaComponent:;
- (double)alpha;
- (id)sourceOverColorMatrix;
- (id)_initWithCGColor:;
- (id)description;
- (id)colorWithAdditionalAlphaComponent:;
- (id)colorBlendedWithColor:;
- (id)_initWithDescription:;
@end
