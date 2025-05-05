@interface CISkyAndGrassAdjust : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputSkyAmount;
@property (nonatomic) NSNumber inputGrassAmount;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputSkyAmount;
- (void)setInputSkyAmount:;
- (id)inputGrassAmount;
- (void)setInputGrassAmount:;
+ (id)customAttributes;
@end
