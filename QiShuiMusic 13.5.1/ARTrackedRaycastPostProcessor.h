@interface ARTrackedRaycastPostProcessor : NSObject
@property (nonatomic) ARSession session;
@property (nonatomic) NSArray trackedRaycasts;
- (void)setSession:;
- (id)trackedRaycasts;
- (void)dealloc;
- (id)initWithSession:;
- (void)startUpdateTimer;
- (void)performBlockWhileLockingRaycasts:;
- (void)invalidateAllRaycasts;
- (id)session;
- (void).cxx_destruct;
- (void)updateFromTimer:;
- (void)removeTrackedRaycastWithIdentifier:;
- (BOOL)result:isCloseEnoughToInitialResultForRaycast:;
- (void)addTrackedRaycast:andProcessInitialResults:;
- (void)processInitialResults:forRaycast:;
- (void)updateFromPoseGraphEventWithData:referenceOriginTransform:;
- (void)processUpdatedResults:;
- (void)invalidateRaycastWithIdentifier:;
- (id)updatePose:referenceOriginTransform:oldRayOrigin:oldRayDirection:newRayOrigin:newRayDirection:;
@end
