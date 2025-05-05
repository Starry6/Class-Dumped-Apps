@interface CUIOuterGlowOrShadowFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputOffset;
@property (nonatomic) NSNumber inputRange;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputSize;
@property (nonatomic) NSNumber inputSpread;
@property (nonatomic) CIColor inputColor;
- (void)setInputRadius:;
- (id)inputImage;
- (id)inputSize;
- (void)setInputImage:;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
- (void)setInputSize:;
- (id)inputOffset;
- (void)setInputOffset:;
- (id)inputRange;
- (void)setInputRange:;
- (id)inputSpread;
- (void)setInputSpread:;
+ (id)customAttributes;
@end
