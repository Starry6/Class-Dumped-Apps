@interface CIPageCurlWithShadowTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIImage inputBacksideImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)inputBacksideImage;
- (void)setInputBacksideImage:;
- (id)_CIPageCurlWithShadowTransition;
- (id)_CIPageCurlNoShadowTransition;
+ (id)customAttributes;
@end
