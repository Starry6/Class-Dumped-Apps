@interface CITorusLensDistortion : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CITorusRefraction;
+ (id)customAttributes;
@end
