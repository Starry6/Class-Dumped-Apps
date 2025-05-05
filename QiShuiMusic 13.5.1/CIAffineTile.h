@interface CIAffineTile : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSValue inputTransform;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputTransform;
- (void)setInputTransform:;
+ (id)customAttributes;
@end
