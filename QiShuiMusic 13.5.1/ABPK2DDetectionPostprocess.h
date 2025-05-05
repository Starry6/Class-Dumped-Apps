@interface ABPK2DDetectionPostprocess : NSObject
- (id)get2DDetectionResultforRotation:croppedRect:;
- (id)getAligned3DSkeleton;
- (id)getRaw2DDetectionResultforRotation:croppedRect:;
- (int)extract2DSkeletonfromBuffers:withImagePreProcessingParams:atTimestamp:previousSkeleton3D:;
- (id)initWithInputJoints:andOutputJoints:use3DSkeletonForExtrapolation:shouldPush3DSupportSkeleton:withExtrapolationTime:;
- (void)getRawTrackedHumanSkeleton:;
- (void)getRawTrackedHumanSkeletonVector:;
- (void)getTrackedHumanSkeleton:;
- (void)getTrackedHumanForLiftingSkeleton:;
- (void)getRawTrackedHumanForLiftingSkeleton:;
- (void)_startExtract2DSkeletonSignpostWithTimestamp:;
- (void)_endExtract2DSkeletonSignpostWithTimestamp:;
- (void)_startMaxFilterSignpostWithTimestamp:;
- (void)_endMaxFilterSignpostWithTimestamp:;
- (void)_startExtractHumanSignpostWithTimestamp:;
- (void)_endExtractHumanSignpostWithTimestamp:;
- (void)_startExtrapolationSignpostWithTimestamp:;
- (void)_endExtrapolationSignpostWithTimestamp:;
@end
