@interface ADMonocularExecutor : ADExecutor
@property (nonatomic) ADMonocularExecutorParameters executorParameters;
- (void)dealloc;
- (void).cxx_destruct;
- (id)executorParameters;
- (id)initWithInputPrioritization:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
- (id)getIntermediates;
- (long long)prepareForEngineType:roi:exifOrientation:;
- (long long)prepareForEngineType:roi:exifOrientation:rotationPreference:;
- (long long)executeWithColor:outDepthMap:;
@end
