@interface BYSilentLoginUpgradeGuarantor : NSObject
@property (nonatomic) BOOL didEnsureQueuesAndStartSilentLoginUpgrade;
@property (nonatomic) NSObject<OS_dispatch_queue> silentLoginUpgradeCompletionQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> shortLivedTokenUpgradeCompletionQueue;
- (id)init;
- (void).cxx_destruct;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)didShortCircuitSilentLoginUpgrade;
- (void)blockUntilShortLivedTokenUpgradeCompletes;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (BOOL)didEnsureQueuesAndStartSilentLoginUpgrade;
- (void)setDidEnsureQueuesAndStartSilentLoginUpgrade:;
- (id)silentLoginUpgradeCompletionQueue;
- (void)setSilentLoginUpgradeCompletionQueue:;
- (id)shortLivedTokenUpgradeCompletionQueue;
- (void)setShortLivedTokenUpgradeCompletionQueue:;
+ (id)sharedInstance;
@end
