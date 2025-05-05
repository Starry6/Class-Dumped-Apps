@interface CKFetchMergeableDeltaMetadataOperation : CKDatabaseOperation
@property (nonatomic) NSMutableDictionary perValueErrors;
@property (nonatomic) NSArray mergeableValueIDs;
@property (nonatomic) <CKFetchMergeableDeltaMetadataOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKFetchMergeableDeltaMetadataOperationInfo operationInfo;
@property (nonatomic) @? metadataFetchedBlock;
@property (nonatomic) @? fetchMergeableDeltaMetadataCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (void)handleFetchForMergeableValueID:metadatas:error:;
- (void)setMetadataFetchedBlock:;
- (id)metadataFetchedBlock;
- (void)setFetchMergeableDeltaMetadataCompletionBlock:;
- (id)fetchMergeableDeltaMetadataCompletionBlock;
- (id)initWithMergeableValueIDs:;
- (id)mergeableValueIDs;
- (void)setMergeableValueIDs:;
- (id)perValueErrors;
- (void)setPerValueErrors:;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
