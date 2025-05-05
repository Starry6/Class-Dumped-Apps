@interface CIHueSaturationValueGradient : CIFilter
@property (nonatomic) NSNumber inputValue;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputSoftness;
@property (nonatomic) NSNumber inputDither;
@property (nonatomic) @ inputColorSpace;
- (id)inputColorSpace;
- (void)setInputColorSpace:;
- (void)setInputRadius:;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputValue;
- (id)inputSoftness;
- (void)setInputSoftness:;
- (id)inputDither;
- (void)setInputDither:;
- (id)_kernelD;
- (void)setInputValue:;
+ (id)customAttributes;
@end
