@interface ADJasperColorV2Executor : ADExecutor
@property (nonatomic) ADJasperColorV2ExecutorParameters executorParameters;
@property (nonatomic) {CGSize=dd} expectedOutputSize;
@property (nonatomic) ^{__CVBuffer=} prevDepth;
@property (nonatomic) ^{__CVBuffer=} prevUncertainty;
@property (nonatomic) ^{__CVBuffer=} prevColor;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)prepareForColorROI:;
- (id)executorParameters;
- (long long)executeWithColor:pointCloud:jasperToColorTransform:colorCamera:outputDepthMap:outputConfidenceMap:;
- (id)initWithInputPrioritization:engineType:;
- (id)initWithInputPrioritization:;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (void)setExecutorParameters:;
- (id)getIntermediates;
- (id)expectedOutputSize;
- (id)prevDepth;
- (id)prevUncertainty;
- (id)prevColor;
@end
