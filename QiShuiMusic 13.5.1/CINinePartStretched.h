@interface CINinePartStretched : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputBreakpoint0;
@property (nonatomic) CIVector inputBreakpoint1;
@property (nonatomic) CIVector inputGrowAmount;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputBreakpoint0;
- (void)setInputBreakpoint0:;
- (id)inputBreakpoint1;
- (void)setInputBreakpoint1:;
- (id)inputGrowAmount;
- (void)setInputGrowAmount:;
+ (id)customAttributes;
@end
