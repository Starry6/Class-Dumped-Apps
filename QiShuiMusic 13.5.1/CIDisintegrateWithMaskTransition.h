@interface CIDisintegrateWithMaskTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIImage inputMaskImage;
@property (nonatomic) NSNumber inputTime;
@property (nonatomic) NSNumber inputShadowRadius;
@property (nonatomic) NSNumber inputShadowDensity;
@property (nonatomic) CIVector inputShadowOffset;
- (id)inputTime;
- (id)inputMaskImage;
- (void)setInputMaskImage:;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)_kernelG;
- (id)inputShadowRadius;
- (void)setInputShadowRadius:;
- (id)inputShadowDensity;
- (void)setInputShadowDensity:;
- (id)inputShadowOffset;
- (void)setInputShadowOffset:;
+ (id)customAttributes;
@end
