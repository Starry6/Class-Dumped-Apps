@interface CIPortraitBlurCombiner : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputBlurImage;
@property (nonatomic) CIImage inputMatteImage;
@property (nonatomic) NSDictionary inputTuningParameters;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)inputMatteImage;
- (id)_ourBlendKernelMetal;
- (void)setInputMatteImage:;
- (id)_blendKernel:;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;
- (id)inputBlurImage;
- (void)setInputBlurImage:;
@end
