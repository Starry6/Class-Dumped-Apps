@interface CIAffineClamp : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSValue inputTransform;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTransform;
- (void)setInputTransform:;
+ (id)customAttributes;
@end
