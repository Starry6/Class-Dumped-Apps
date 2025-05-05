@interface SSVFairPlaySubscriptionController : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)subscriptionStatusForAccountUniqueIdentifier:;
- (void)enumerateAccountSubscriptionStatusUsingBlock:;
- (BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:transactionType:machineIDData:returningSubscriptionBagData:error:;
- (BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:transactionType:certificateData:assetIDData:returningLeaseData:subscriptionBagData:error:;
- (BOOL)importSubscriptionKeyBagData:returningError:;
- (BOOL)importSubscriptionKeyBagData:leaseInfoData:returningError:;
- (BOOL)stopSubscriptionLease:;
- (id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:subscriptionInfoListLength:;
- (void)_enumerateSubscriptionInfoUsingBlock:;
- (void)_notifySubscriptionStatusDidChange;
- (id)_subscriptionStatusForFPSubscriptionInfo:;
@end
