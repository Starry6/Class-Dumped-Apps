@interface CIDisparityPreprocV3 : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputAlphaImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)preprocKernel;
- (id)preprocKernelNoAlpha;
- (id)inputAlphaImage;
- (void)setInputAlphaImage:;
@end
