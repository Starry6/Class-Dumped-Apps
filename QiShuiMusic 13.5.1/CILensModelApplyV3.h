@interface CILensModelApplyV3 : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputLensModelImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)kernel;
- (id)inputLensModelImage;
- (void)setInputLensModelImage:;
@end
