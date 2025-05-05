@interface CKFetchMergeableDeltasOperation : CKDatabaseOperation
@property (nonatomic) NSArray mergeableValueIDs;
@property (nonatomic) <CKFetchMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKFetchMergeableDeltasOperationInfo operationInfo;
@property (nonatomic) @? deltasFetchedBlock;
@property (nonatomic) @? fetchMergeableDeltasCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)initWithMergeableValueIDs:;
- (id)mergeableValueIDs;
- (void)setMergeableValueIDs:;
- (void)handleFetchForMergeableValueID:fetchedDeltas:error:;
- (void)setDeltasFetchedBlock:;
- (id)deltasFetchedBlock;
- (void)setFetchMergeableDeltasCompletionBlock:;
- (id)fetchMergeableDeltasCompletionBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
