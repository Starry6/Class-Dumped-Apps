@interface CIPortraitBlurNoise : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputLumaNoiseAmpl;
@property (nonatomic) NSNumber inputLumaNoiseModelCoeff;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) NSNumber inputUseMetal;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)_kernelMetal;
- (id)inputLumaNoiseAmpl;
- (void)setInputLumaNoiseAmpl:;
- (id)inputLumaNoiseModelCoeff;
- (void)setInputLumaNoiseModelCoeff:;
- (id)inputUseMetal;
- (void)setInputUseMetal:;
@end
