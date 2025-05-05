@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray subscriptionsToSave;
@property (nonatomic) NSArray subscriptionIDsToDelete;
- (void)setSubscriptionsToSave:;
- (id)subscriptionsToSave;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSubscriptionIDsToDelete:;
- (id)subscriptionIDsToDelete;
+ (BOOL)supportsSecureCoding;
@end
