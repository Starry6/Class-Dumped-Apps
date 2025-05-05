@interface CIBlurmapRefinementLinearMapping : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputSecondaryImage;
@property (nonatomic) NSNumber inputScalingFactor;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)kernel;
- (id)inputSecondaryImage;
- (void)setInputSecondaryImage:;
- (id)kernelNoSecondaryImage;
- (id)inputScalingFactor;
- (void)setInputScalingFactor:;
@end
