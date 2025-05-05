@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) BWVideoFormat inputFormat;
@property (nonatomic) BWVideoFormat outputFormat;
@property (nonatomic) BOOL quadraSupportEnabled;
@property (nonatomic) BWVideoFormat ultraHighResolutionInputFormat;
@property (nonatomic) BWVideoFormat ultraHighResolutionOutputFormat;
@property (nonatomic) NSDictionary finalCropRectOverscanMultiplierByPortType;
- (id)outputFormat;
- (void)setOutputFormat:;
- (void)dealloc;
- (id)inputFormat;
- (void)setInputFormat:;
- (BOOL)quadraSupportEnabled;
- (void)setQuadraSupportEnabled:;
- (id)finalCropRectOverscanMultiplierByPortType;
- (void)setFinalCropRectOverscanMultiplierByPortType:;
- (id)ultraHighResolutionInputFormat;
- (void)setUltraHighResolutionInputFormat:;
- (id)ultraHighResolutionOutputFormat;
- (void)setUltraHighResolutionOutputFormat:;
@end
