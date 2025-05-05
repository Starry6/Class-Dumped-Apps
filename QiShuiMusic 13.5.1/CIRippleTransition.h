@interface CIRippleTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIImage inputShadingImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)inputShadingImage;
- (void)setInputShadingImage:;
- (id)_CIRippleTransition;
+ (id)customAttributes;
@end
