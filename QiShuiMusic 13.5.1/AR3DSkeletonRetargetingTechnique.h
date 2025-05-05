@interface AR3DSkeletonRetargetingTechnique : ARTechnique
@property (nonatomic) ARCoreRESkeletonResults latestResults;
@property (nonatomic) NSObject<OS_dispatch_semaphore> resultSemaphore;
- (id)init;
- (id)processData:;
- (void).cxx_destruct;
- (id)latestResults;
- (BOOL)isEqual:;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (id)_retargetSkeleton:;
- (void)setLatestResults:;
- (id)resultSemaphore;
- (void)setResultSemaphore:;
+ (BOOL)producesResultDataForAnchorOfClass:;
@end
