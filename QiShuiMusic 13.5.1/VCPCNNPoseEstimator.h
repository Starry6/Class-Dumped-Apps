@interface VCPCNNPoseEstimator : NSObject
- (id)getInputBuffer;
- (int)computePoseScore:;
- (int)detectPoseForFace:inBuffer:yaw:;
+ (id)estimator;
@end
