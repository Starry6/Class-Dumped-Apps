@interface CIBlurmapSmoothing : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputDraftMode;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (id)_kernelH;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)_kernelV;
- (id)performPass:reference:values:rect:;
- (id)inputDraftMode;
- (void)setInputDraftMode:;
+ (id)customAttributes;
@end
