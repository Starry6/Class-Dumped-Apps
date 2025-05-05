@interface CIColorBalance : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIColor inputColor;
@property (nonatomic) NSNumber inputStrength;
@property (nonatomic) NSNumber inputWarmth;
@property (nonatomic) NSNumber inputDamping;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
- (id)inputStrength;
- (void)setInputStrength:;
- (id)inputWarmth;
- (void)setInputWarmth:;
- (id)inputDamping;
- (void)setInputDamping:;
+ (id)customAttributes;
@end
