@interface ADPCEDisparityColorExecutorParameters : ADExecutorParameters
@property (nonatomic) ADPCEDisparityColorPipelineParameters pipelineParameters;
@property (nonatomic) BOOL temporalConsistencyActive;
@property (nonatomic) BOOL disparityPreprocessingActive;
@property (nonatomic) BOOL disparityPostprocessingActive;
@property (nonatomic) q disparityRotation;
@property (nonatomic) S disparityInvalidValue;
- (void).cxx_destruct;
- (id)pipelineParameters;
- (id)initForInputSource:;
- (id)initForPipelineParameters:inputSource:;
- (BOOL)temporalConsistencyActive;
- (void)setTemporalConsistencyActive:;
- (BOOL)disparityPreprocessingActive;
- (void)setDisparityPreprocessingActive:;
- (BOOL)disparityPostprocessingActive;
- (void)setDisparityPostprocessingActive:;
- (long long)disparityRotation;
- (void)setDisparityRotation:;
- (unsigned short)disparityInvalidValue;
- (void)setDisparityInvalidValue:;
@end
