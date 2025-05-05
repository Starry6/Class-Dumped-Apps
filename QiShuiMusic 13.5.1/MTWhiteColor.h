@interface MTWhiteColor : MTColor
@property (nonatomic) double white;
@property (nonatomic) double alpha;
- (id)_rgbColor;
- (id)initWithWhite:alpha:;
- (id)CGColor;
- (id)colorDescription;
- (double)white;
- (id)colorWithAlphaComponent:;
- (double)alpha;
- (id)sourceOverColorMatrix;
- (id)_initWithCGColor:;
- (id)description;
- (id)colorWithAdditionalAlphaComponent:;
- (id)colorBlendedWithColor:;
- (id)_initWithDescription:;
@end
