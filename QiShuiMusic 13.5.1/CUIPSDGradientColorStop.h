@interface CUIPSDGradientColorStop : CUIPSDGradientStop
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)gradientColor;
- (BOOL)isColorStop;
- (id)initWithLocation:gradientColor:;
- (double)colorLocation;
+ (id)colorStopWithLocation:gradientColor:;
@end
