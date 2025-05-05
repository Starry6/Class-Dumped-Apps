@interface CIKMeans : CIReductionFilter
@property (nonatomic) CIImage inputMeans;
@property (nonatomic) NSNumber inputCount;
@property (nonatomic) NSNumber inputPasses;
@property (nonatomic) NSNumber inputPerceptual;
- (void)setInputCount:;
- (id)inputCount;
- (id)outputImage;
- (id)inputPasses;
- (id)inputPerceptual;
- (void)setInputPerceptual:;
- (id)_combine:;
- (id)_kernelKmeans;
- (id)defuse:seed:;
- (void)setInputPasses:;
- (id)inputMeans;
- (void)setInputMeans:;
+ (id)customAttributes;
@end
