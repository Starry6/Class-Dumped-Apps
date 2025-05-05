@interface CIPortraitBlurDirectionalBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputMaxBlur;
@property (nonatomic) NSNumber inputHorizontalBlur;
@property (nonatomic) NSNumber inputAntiAliasBlurStrength;
@property (nonatomic) NSNumber inputUseMetal;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputMaxBlur;
- (void)setInputMaxBlur:;
- (id)_kernelMetal;
- (id)inputUseMetal;
- (void)setInputUseMetal:;
- (id)inputHorizontalBlur;
- (void)setInputHorizontalBlur:;
- (id)inputAntiAliasBlurStrength;
- (void)setInputAntiAliasBlurStrength:;
@end
