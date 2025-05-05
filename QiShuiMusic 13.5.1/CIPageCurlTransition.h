@interface CIPageCurlTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIImage inputBacksideImage;
@property (nonatomic) CIImage inputShadingImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)_CIPageCurlTransition;
- (id)_CIPageCurlTransNoEmap;
- (id)inputBacksideImage;
- (void)setInputBacksideImage:;
- (id)inputShadingImage;
- (void)setInputShadingImage:;
+ (id)customAttributes;
@end
