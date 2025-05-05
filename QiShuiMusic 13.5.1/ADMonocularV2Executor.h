@interface ADMonocularV2Executor : ADExecutor
@property (nonatomic) ADMonocularV2ExecutorParameters executorParameters;
@property (nonatomic) ^{__CVBuffer=} prevDisparity;
- (void)dealloc;
- (void).cxx_destruct;
- (id)executorParameters;
- (id)initWithInputPrioritization:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
- (id)getIntermediates;
- (id)initWithInputPrioritization:parameters:;
- (long long)prepareForEngineType:inputColorROI:;
- (id)prevDisparity;
- (long long)executeWithColor:outDisparity:;
@end
