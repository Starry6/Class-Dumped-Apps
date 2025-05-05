@interface CKFetchRegisteredBundleIDsOperation : CKOperation
@property (nonatomic) NSArray bundleIDs;
@property (nonatomic) <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) @? fetchRegisteredBundleIDsCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)bundleIDs;
- (id)activityCreate;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)setBundleIDs:;
- (void)handleOperationDidCompleteWithBundleIDs:metrics:error:;
- (void)setFetchRegisteredBundleIDsCompletionBlock:;
- (id)fetchRegisteredBundleIDsCompletionBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
+ (SEL)daemonCallbackCompletionSelector;
@end
