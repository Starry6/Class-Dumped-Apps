@interface CUIOuterBevelEmbossFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputSize;
@property (nonatomic) NSNumber inputSoften;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) CIColor inputHighlightColor;
@property (nonatomic) CIColor inputShadowColor;
- (id)_kernelC;
- (id)inputAngle;
- (id)inputImage;
- (id)inputSize;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)_kernel;
- (id)outputImage;
- (void)setInputSize:;
- (id)inputSoften;
- (void)setInputSoften:;
- (id)inputHighlightColor;
- (void)setInputHighlightColor:;
- (id)inputShadowColor;
- (void)setInputShadowColor:;
+ (id)customAttributes;
@end
