@interface CIConstantColorGenerator : CIFilter
@property (nonatomic) CIColor inputColor;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
+ (id)customAttributes;
@end
