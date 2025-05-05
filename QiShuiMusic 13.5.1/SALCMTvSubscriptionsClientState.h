@interface SALCMTvSubscriptionsClientState : SAAceClientState
@property (nonatomic) NSArray subscriptions;
- (void)setSubscriptions:;
- (id)groupIdentifier;
- (id)subscriptions;
- (id)encodedClassName;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:context:;
@end
