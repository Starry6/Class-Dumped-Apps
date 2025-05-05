@interface ABPK2DPoseEstimation : NSObject
- (void).cxx_destruct;
- (void)getRawTrackedHumanSkeleton:;
- (void)getRawTrackedHumanSkeletonVector:;
- (void)getTrackedHumanSkeleton:;
- (void)getTrackedHumanForLiftingSkeleton:;
- (void)getRawTrackedHumanForLiftingSkeleton:;
- (id)initWith2DDetectionConfig:use3DSkeletonForExtrapolation:shouldPush3DSupportSkeleton:;
- (int)runWithMLImageData:rotationOfResultTensor:;
@end
