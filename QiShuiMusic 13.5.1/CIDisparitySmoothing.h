@interface CIDisparitySmoothing : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputNumIterations;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_customBoxBlur5Kernel;
- (id)outputImageMetal;
- (id)inputNumIterations;
- (void)setInputNumIterations:;
+ (id)customAttributes;
@end
