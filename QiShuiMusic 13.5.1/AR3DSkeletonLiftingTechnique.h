@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique
- (id)init;
- (void).cxx_destruct;
- (double)requiredTimeInterval;
- (void)_prepareOnce:;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:;
- (void)_endMLProcessingSignpostWithTimestamp:;
- (void)_startMLRunNetworkSignpostWithTimestamp:;
- (void)_endMLRunNetworkSignpostWithTimestamp:;
- (void)_startMLCreateResultSignpostWithTimestamp:orientation:outputSize:;
- (void)_endMLCreateResultSignpostWithTimestamp:;
- (unsigned long long)requiredSensorDataTypes;
- (void)changeEspressoConfig:;
- (id)processEspressoTensor:;
@end
