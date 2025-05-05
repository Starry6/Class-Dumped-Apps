@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer;
- (int)computePoseScore:;
+ (id)sharedModel:;
@end
