@interface ABPKAlgOutput : NSObject
@property (nonatomic) ABPK2dSkeleton rawDetection2dSkeletonABPK;
@property (nonatomic) ABPK2dSkeleton detection2dSkeletonABPK;
@property (nonatomic) NSMutableArray rawDetection2dSkeletonABPKArray;
@property (nonatomic) ABPKSkeleton liftingSkeletonABPK;
@property (nonatomic) ABPK2dSkeleton registered2dSkeletonABPK;
@property (nonatomic) ABPKSkeleton retargetedSkeletonABPK;
@property (nonatomic) ABPKAlgorithmState algState;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)setRawDetection2dSkeletonABPKArray:;
- (id)rawDetection2dSkeletonABPK;
- (void)setRawDetection2dSkeletonABPK:;
- (id)detection2dSkeletonABPK;
- (void)setDetection2dSkeletonABPK:;
- (id)liftingSkeletonABPK;
- (void)setLiftingSkeletonABPK:;
- (id)registered2dSkeletonABPK;
- (void)setRegistered2dSkeletonABPK:;
- (id)retargetedSkeletonABPK;
- (void)setRetargetedSkeletonABPK:;
- (id)algState;
- (void)setAlgState:;
- (id)rawDetection2dSkeletonABPKArray;
@end
