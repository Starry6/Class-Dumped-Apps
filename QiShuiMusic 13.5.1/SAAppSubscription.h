@interface SAAppSubscription : SADomainObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSArray subscriptionTiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)bundleId;
- (id)encodedClassName;
- (void)setBundleId:;
- (id)subscriptionTiers;
- (void)setSubscriptionTiers:;
+ (id)appSubscription;
+ (id)appSubscriptionWithDictionary:context:;
@end
