@interface CILensModelApply : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputLensModelParams;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)kernel;
- (id)inputLensModelParams;
- (void)setInputLensModelParams:;
@end
