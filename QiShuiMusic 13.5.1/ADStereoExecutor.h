@interface ADStereoExecutor : ADExecutor
@property (nonatomic) ADStereoExecutorParameters executorParameters;
@property (nonatomic) ADStereoPipeline pipeline;
- (void)dealloc;
- (void).cxx_destruct;
- (id)pipeline;
- (id)executorParameters;
- (id)initWithInputAlignment:andPrioritization:;
- (id)initWithInputAlignment:prioritization:andParameters:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)prepareForEngineType:;
- (long long)prepareWithBestEngine;
- (long long)executeWithRefColor:auxColor:outDisparityMap:;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
@end
