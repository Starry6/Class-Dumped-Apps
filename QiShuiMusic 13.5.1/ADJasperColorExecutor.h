@interface ADJasperColorExecutor : ADExecutor
@property (nonatomic) ADJasperColorExecutorParameters executorParameters;
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
- (long long)prepareForEngineType:roi:exifOrientation:useTemporalConsistency:;
- (long long)prepareForEngineType:roi:exifOrientation:useTemporalConsistency:rotationPreference:;
- (long long)prepareForEngineType:roi:exifOrientation:rotationPreference:;
- (long long)executeWithColor:pointCloud:outDepthMap:outConfMap:;
- (long long)executeWithColor:pointCloud:outDepthMap:outConfMap:worldToCameraTransform:cameraCalibration:;
- (long long)executeWithColor:pointCloud:outDepthMap:outConfMap:outNormalsMap:;
- (long long)executeWithColor:pointCloud:outDepthMap:outConfMap:outNormalsMap:worldToCameraTransform:cameraCalibration:;
@end
