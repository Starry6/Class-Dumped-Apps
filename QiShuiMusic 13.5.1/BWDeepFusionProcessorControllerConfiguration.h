@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) {?=ii} maxInputDimensions;
@property (nonatomic) {?=ii} maxOutputDimensions;
@property (nonatomic) BOOL quadraSupportEnabled;
@property (nonatomic) NSInteger stillImageFusionScheme;
@property (nonatomic) NSDictionary rawColorCalibrationsByPortType;
@property (nonatomic) NSDictionary rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) BOOL delayPrepareAndCacheBuffers;
- (void)dealloc;
- (void)setStillImageFusionScheme:;
- (int)stillImageFusionScheme;
- (BOOL)quadraSupportEnabled;
- (void)setQuadraSupportEnabled:;
- (id)rawColorCalibrationsByPortType;
- (void)setRawColorCalibrationsByPortType:;
- (id)rawLensShadingCorrectionCoefficientsByPortType;
- (void)setRawLensShadingCorrectionCoefficientsByPortType:;
- (id)maxInputDimensions;
- (void)setMaxInputDimensions:;
- (id)maxOutputDimensions;
- (void)setMaxOutputDimensions:;
- (BOOL)delayPrepareAndCacheBuffers;
- (void)setDelayPrepareAndCacheBuffers:;
@end
