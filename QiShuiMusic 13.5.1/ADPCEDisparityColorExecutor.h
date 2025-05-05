@interface ADPCEDisparityColorExecutor : ADExecutor
@property (nonatomic) ADPCEDisparityColorExecutorParameters executorParameters;
@property (nonatomic) ^{__CVBuffer=} prevDisparity;
@property (nonatomic) ^{__CVBuffer=} prevFeatures;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)executorParameters;
- (id)initForInputSource:;
- (long long)postProcessDisparity:output:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
- (id)getIntermediates;
- (long long)prepareForEngineType:inputColorROI:;
- (id)prevDisparity;
- (id)initForInputSource:parameters:;
- (id)prevFeatures;
- (long long)preProcessDisparity:normalizationMultiplier:normalizationOffset:output:;
- (long long)executeWithDisparity:color:outDisparity:;
- (long long)executeWithDisparity:normalizationMultiplier:normalizationOffset:color:outDisparity:;
@end
