@interface CTXPCServiceSubscriptionInfo : NSObject
@property (nonatomic) NSArray subscriptions;
@property (nonatomic) NSArray subscriptionsInUse;
@property (nonatomic) NSArray subscriptionsValid;
- (void)setSubscriptions:;
- (id)subscriptions;
- (id)subscriptionsInUse;
- (id)redactedDescription;
- (void)setSubscriptionsInUse:;
- (id)initWithCoder:;
- (id)subscriptionsValid;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setSubscriptionsValid:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
