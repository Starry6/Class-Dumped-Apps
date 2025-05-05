@interface CINinePartTiled : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputBreakpoint0;
@property (nonatomic) CIVector inputBreakpoint1;
@property (nonatomic) CIVector inputGrowAmount;
@property (nonatomic) NSNumber inputFlipYTiles;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputBreakpoint0;
- (void)setInputBreakpoint0:;
- (id)inputBreakpoint1;
- (void)setInputBreakpoint1:;
- (id)inputGrowAmount;
- (void)setInputGrowAmount:;
- (id)_kernelAlt;
- (id)inputFlipYTiles;
- (void)setInputFlipYTiles:;
+ (id)customAttributes;
@end
