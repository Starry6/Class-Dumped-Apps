@interface CIAccordionFoldTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) NSNumber inputBottomHeight;
@property (nonatomic) NSNumber inputNumberOfFolds;
@property (nonatomic) NSNumber inputFoldShadowAmount;
@property (nonatomic) NSNumber inputTime;
- (id)inputTime;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelWarpS;
- (id)_kernelWarpT;
- (id)_kernelMix;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)inputBottomHeight;
- (void)setInputBottomHeight:;
- (id)inputNumberOfFolds;
- (void)setInputNumberOfFolds:;
- (id)inputFoldShadowAmount;
- (void)setInputFoldShadowAmount:;
+ (id)customAttributes;
@end
