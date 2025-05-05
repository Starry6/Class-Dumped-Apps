@interface CIFalseColor : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIColor inputColor0;
@property (nonatomic) CIColor inputColor1;
- (id)inputColor1;
- (id)inputImage;
- (id)inputColor0;
- (void)setInputImage:;
- (void)setInputColor1:;
- (void)setInputColor0:;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
