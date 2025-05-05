@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation
@property (nonatomic) NSString webAuthToken;
@property (nonatomic) <CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKFetchWebAuthTokenOperationInfo operationInfo;
@property (nonatomic) NSString APIToken;
@property (nonatomic) @? fetchWebAuthTokenCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (id)init;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)fetchWebAuthTokenCompletionBlock;
- (void)setFetchWebAuthTokenCompletionBlock:;
- (void)handleOperationDidCompleteWithWebAuthToken:metrics:error:;
- (id)initWithAPIToken:;
- (id)APIToken;
- (void)setAPIToken:;
- (id)webAuthToken;
- (void)setWebAuthToken:;
+ (void)applyDaemonCallbackInterfaceTweaks:;
+ (SEL)daemonCallbackCompletionSelector;
@end
