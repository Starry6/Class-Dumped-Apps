@interface CKFetchUserQuotaOperation : CKDatabaseOperation
@property (nonatomic) Q quotaAvailable;
@property (nonatomic) <CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) @? fetchUserQuotaCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (unsigned long long)quotaAvailable;
- (id)activityCreate;
- (id)init;
- (void)setQuotaAvailable:;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithQuotaAvailable:metrics:error:;
- (void)setFetchUserQuotaCompletionBlock:;
- (id)fetchUserQuotaCompletionBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
+ (SEL)daemonCallbackCompletionSelector;
@end
