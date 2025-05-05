@interface WBSPasswordBreachChecker : NSObject
- (id)initWithContext:bagManager:;
- (void)_checkLowFrequencyBatchesWithBagManager:completionHandler:;
- (void)checkPasswordBatchesWithCompletionHandler:;
- (void).cxx_destruct;
- (void)_checkHighFrequencyBucketForPasswords:withCompletionHandler:;
- (void)_mergeResultsByUUID:intoResultsByPersistentIdentifier:usingQueuedPasswordsbyUUID:;
@end
