@interface CUIInnerGlowOrShadowFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputOffset;
@property (nonatomic) NSNumber inputRange;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) CIColor inputColor;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
- (id)inputOffset;
- (void)setInputOffset:;
- (id)inputRange;
- (void)setInputRange:;
+ (id)customAttributes;
@end
