@interface BWInferenceEngineControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) BWVideoFormat inputFormat;
@property (nonatomic) NSArray enabledInferenceMasks;
@property (nonatomic) BOOL mattingOutputValidContentDetectionEnabled;
@property (nonatomic) BOOL fastMattingEnabled;
@property (nonatomic) BOOL smartCameraClassificationsEnabled;
@property (nonatomic) Q enabledVisionInferences;
@property (nonatomic) NSInteger personSemanticsVersion;
- (id)init;
- (void)dealloc;
- (int)personSemanticsVersion;
- (id)inputFormat;
- (void)setInputFormat:;
- (id)enabledInferenceMasks;
- (void)setEnabledInferenceMasks:;
- (BOOL)mattingOutputValidContentDetectionEnabled;
- (void)setMattingOutputValidContentDetectionEnabled:;
- (BOOL)fastMattingEnabled;
- (void)setFastMattingEnabled:;
- (BOOL)smartCameraClassificationsEnabled;
- (void)setSmartCameraClassificationsEnabled:;
- (unsigned long long)enabledVisionInferences;
- (void)setEnabledVisionInferences:;
- (void)setPersonSemanticsVersion:;
@end
