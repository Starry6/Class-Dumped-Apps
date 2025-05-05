@interface ICMusicSubscriptionFairPlayController : NSObject
- (void)getKeyStatusListWithCompletionHandler:;
- (void)importSubscriptionKeyBagData:leaseInfoData:completionHandler:;
- (id)getKeyStatusForAccountUniqueIdentifier:error:;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:transactionType:machineIDData:completionHandler:;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:transactionType:certificateData:assetIDData:completionHandler:;
- (void)stopSubscriptionLeaseWithCompletion:;
- (void).cxx_destruct;
- (id)_init;
- (void)importSubscriptionKeyBagData:completionHandler:;
+ (id)sharedController;
@end
