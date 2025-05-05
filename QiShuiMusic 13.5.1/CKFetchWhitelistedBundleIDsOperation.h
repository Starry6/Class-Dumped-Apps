@interface CKFetchWhitelistedBundleIDsOperation : CKOperation
@property (nonatomic) NSArray bundleIDs;
@property (nonatomic) <CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) @? fetchWhitelistedBundleIDsCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)bundleIDs;
- (id)activityCreate;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)setBundleIDs:;
- (void)handleOperationDidCompleteWithBundleIDs:metrics:error:;
- (void)setFetchWhitelistedBundleIDsCompletionBlock:;
- (id)fetchWhitelistedBundleIDsCompletionBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
+ (SEL)daemonCallbackCompletionSelector;
@end
