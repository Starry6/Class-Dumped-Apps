@interface WBSRetryableCKFetchSubscriptionsOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray subscriptionIDs;
@property (nonatomic) @? perSubscriptionCompletionBlock;
@property (nonatomic) @? fetchSubscriptionCompletionBlock;
- (void)_setUpOperation:;
- (void)setSubscriptionIDs:;
- (id)_makeOperation;
- (void)setPerSubscriptionCompletionBlock:;
- (id)subscriptionIDs;
- (void)setFetchSubscriptionCompletionBlock:;
- (id)fetchSubscriptionCompletionBlock;
- (void).cxx_destruct;
- (id)perSubscriptionCompletionBlock;
@end
