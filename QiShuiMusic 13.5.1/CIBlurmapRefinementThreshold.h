@interface CIBlurmapRefinementThreshold : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputThreshold;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputThreshold;
- (void)setInputThreshold:;
- (id)kernel;
@end
