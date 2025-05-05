@interface CIDisparityRefinementAntialiasV3 : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputPreprocImage;
@property (nonatomic) CIImage inputDisparityWeightImage;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)inputPreprocImage;
- (void)setInputPreprocImage:;
- (id)antialiasKernel;
- (id)inputDisparityWeightImage;
- (void)setInputDisparityWeightImage:;
@end
