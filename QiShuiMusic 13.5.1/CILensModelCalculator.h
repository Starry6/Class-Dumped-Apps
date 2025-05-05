@interface CILensModelCalculator : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputMinMaxImage;
@property (nonatomic) CIVector inputOriginalSize;
@property (nonatomic) CIVector inputFocusRect;
@property (nonatomic) NSNumber inputSimulatedAperture;
@property (nonatomic) NSNumber inputIntrinsicMatrixFocalLength;
@property (nonatomic) NSDictionary inputTuningParameters;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)kernel;
- (id)inputOriginalSize;
- (void)setInputOriginalSize:;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)inputFocusRect;
- (void)setInputFocusRect:;
- (id)mtlKernel;
- (id)cpuParams;
- (id)inputMinMaxImage;
- (void)setInputMinMaxImage:;
- (id)inputSimulatedAperture;
- (void)setInputSimulatedAperture:;
- (id)inputIntrinsicMatrixFocalLength;
- (void)setInputIntrinsicMatrixFocalLength:;
+ (id)customAttributes;
@end
