@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
- (void)setSubscriptionIDs:;
- (BOOL)isFetchAllSubscriptionsOperation;
- (void)setIsFetchAllSubscriptionsOperation:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)subscriptionIDs;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
