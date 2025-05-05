@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation
@property (nonatomic) NSMutableDictionary perValueErrors;
@property (nonatomic) <CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKReplaceMergeableDeltasOperationInfo operationInfo;
@property (nonatomic) NSArray replaceDeltasRequests;
@property (nonatomic) @? perReplacementBlock;
@property (nonatomic) @? replaceMergeableDeltasCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)perValueErrors;
- (void)setPerValueErrors:;
- (void)handleCompletedReplaceDeltasRequest:error:;
- (void)setPerReplacementBlock:;
- (id)perReplacementBlock;
- (void)setReplaceMergeableDeltasCompletionBlock:;
- (id)replaceMergeableDeltasCompletionBlock;
- (id)initWithReplaceDeltasRequests:;
- (id)replaceDeltasRequests;
- (void)setReplaceDeltasRequests:;
@end
