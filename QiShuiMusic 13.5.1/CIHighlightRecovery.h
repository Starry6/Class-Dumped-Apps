@interface CIHighlightRecovery : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputApertureScaling;
@property (nonatomic) NSDictionary inputTuningParameters;
@property (nonatomic) NSNumber inputDraftMode;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputApertureScaling;
- (void)setInputApertureScaling:;
- (id)inputTuningParameters;
- (void)setInputTuningParameters:;
- (id)inputDraftMode;
- (void)setInputDraftMode:;
@end
