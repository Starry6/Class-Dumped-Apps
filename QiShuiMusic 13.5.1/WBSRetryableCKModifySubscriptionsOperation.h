@interface WBSRetryableCKModifySubscriptionsOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray subscriptionsToSave;
@property (nonatomic) NSArray subscriptionIDsToDelete;
@property (nonatomic) @? perSubscriptionSaveBlock;
@property (nonatomic) @? perSubscriptionDeleteBlock;
@property (nonatomic) @? modifySubscriptionsCompletionBlock;
- (void)_setUpOperation:;
- (id)_makeOperation;
- (void)setSubscriptionsToSave:;
- (id)subscriptionsToSave;
- (id)perSubscriptionSaveBlock;
- (void)setPerSubscriptionDeleteBlock:;
- (id)modifySubscriptionsCompletionBlock;
- (void).cxx_destruct;
- (void)setPerSubscriptionSaveBlock:;
- (void)setSubscriptionIDsToDelete:;
- (id)subscriptionIDsToDelete;
- (id)perSubscriptionDeleteBlock;
- (void)setModifySubscriptionsCompletionBlock:;
@end
