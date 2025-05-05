@interface CIStretch : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputPoint;
@property (nonatomic) CIVector inputSize;
- (void)setDefaults;
- (void)setInputPoint:;
- (id)inputImage;
- (id)inputSize;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (void)setInputSize:;
- (id)inputPoint;
- (id)computeDOD:;
+ (id)customAttributes;
@end
