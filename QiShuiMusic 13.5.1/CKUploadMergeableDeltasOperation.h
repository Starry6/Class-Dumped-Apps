@interface CKUploadMergeableDeltasOperation : CKDatabaseOperation
@property (nonatomic) <CKUploadMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKUploadMergeableDeltasOperationInfo operationInfo;
@property (nonatomic) @? perDeltaCompletionBlock;
@property (nonatomic) @? perReplacementCompletionBlock;
@property (nonatomic) @? uploadDeltasCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (void)handleUploadForDeltaIdentifier:error:;
- (void)handleReplacementRequest:error:;
- (void)setPerDeltaCompletionBlock:;
- (id)perDeltaCompletionBlock;
- (void)setPerReplacementCompletionBlock:;
- (id)perReplacementCompletionBlock;
- (void)setUploadDeltasCompletionBlock:;
- (id)uploadDeltasCompletionBlock;
- (id)initWithDeltas:replacementRequests:;
@end
