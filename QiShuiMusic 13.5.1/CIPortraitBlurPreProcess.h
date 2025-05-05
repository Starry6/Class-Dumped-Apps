@interface CIPortraitBlurPreProcess : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputBlurmapImage;
@property (nonatomic) NSNumber inputUseMetal;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;
- (id)inputUseMetal;
- (void)setInputUseMetal:;
- (id)inputBlurmapImage;
- (void)setInputBlurmapImage:;
@end
