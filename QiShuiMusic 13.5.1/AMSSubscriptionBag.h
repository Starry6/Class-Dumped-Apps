@interface AMSSubscriptionBag : NSObject
@property (nonatomic) AMSFairPlayContext fairPlayContext;
- (id)init;
- (void).cxx_destruct;
- (id)fairPlayContext;
- (id)subscriptionBagSyncDataForAccount:;
- (BOOL)_generateSubscriptionBagRequestWithAccountIdentifier:transactionType:machineIDData:returningSubscriptionBagData:error:;
+ (id)sharedInstance;
@end
