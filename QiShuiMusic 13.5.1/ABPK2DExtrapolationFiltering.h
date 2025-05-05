@interface ABPK2DExtrapolationFiltering : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)rawTrackedHuman;
- (id)trackedHuman;
- (id)rawTrackedHumanVector;
- (id)trackedHumanForLifting;
- (id)initWithUse3DSkeletonForExtrapolation:shouldPush3DSupportSkeleton:withExtrapolationTime:;
- (int)performExtrapolationOnHumans:withImageResolution:atTimestamp:rotationNeeded:previousSkeleton3D:;
- (id)aligned3DSkeleton;
@end
