@interface CIBlendWithMask : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputBackgroundImage;
@property (nonatomic) CIImage inputMaskImage;
- (void)setInputBackgroundImage:;
- (id)_kernelB0;
- (id)inputMaskImage;
- (float)_maskFillColorValue;
- (void)setInputMaskImage:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputBackgroundImage;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
