@interface CIColorPosterize : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputLevels;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)inputLevels;
- (void)setInputLevels:;
+ (id)customAttributes;
@end
