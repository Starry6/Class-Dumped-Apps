@interface BWInferenceEngineControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) BOOL expectsMoreData;
@property (nonatomic) ^{opaqueCMSampleBuffer=} inferenceImage;
@property (nonatomic) ^{opaqueCMSampleBuffer=} propagationImage;
@property (nonatomic) NSArray enabledInferenceMasks;
@property (nonatomic) BOOL smartCameraClassificationsEnabled;
@property (nonatomic) Q enabledVisionInferences;
- (void)dealloc;
- (id)description;
- (id)initWithSettings:portType:;
- (id)enabledInferenceMasks;
- (void)setEnabledInferenceMasks:;
- (BOOL)smartCameraClassificationsEnabled;
- (void)setSmartCameraClassificationsEnabled:;
- (unsigned long long)enabledVisionInferences;
- (void)setEnabledVisionInferences:;
- (void)addInferenceImage:;
- (void)addInferenceImage:propagationImage:;
- (id)inferenceImage;
- (id)propagationImage;
- (BOOL)expectsMoreData;
@end
