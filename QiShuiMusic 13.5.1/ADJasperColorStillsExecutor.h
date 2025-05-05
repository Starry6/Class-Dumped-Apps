@interface ADJasperColorStillsExecutor : ADExecutor
@property (nonatomic) ADJasperColorStillsExecutorParameters executorParameters;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)prepareForEngineType:inputSize:;
- (id)executorParameters;
- (long long)executeWithColor:pointCloudArray:jasper2ColorTransform:colorCameraCalibration:outDepthMap:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
- (id)getIntermediates;
@end
