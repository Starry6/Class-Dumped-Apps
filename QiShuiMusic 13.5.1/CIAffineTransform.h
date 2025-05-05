@interface CIAffineTransform : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSValue inputTransform;
- (id)_outputProperties;
- (id)inputImage;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTransform;
- (void)setInputTransform:;
+ (id)customAttributes;
@end
