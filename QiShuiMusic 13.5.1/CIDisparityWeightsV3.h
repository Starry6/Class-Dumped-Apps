@interface CIDisparityWeightsV3 : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)weightsXKernel;
- (id)weightsYKernel;
@end
