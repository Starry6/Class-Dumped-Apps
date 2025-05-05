@interface VSSubscriptionValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (BOOL)_subscriptionIsCoreSpotlight:;
+ (id)_legacySubscriptionInfoForUserAccount:;
+ (id)_userAccountWithLegacySubscriptionPrimitives:;
+ (void)_updateUserAccount:fromJSONWithSubscription:;
+ (id)_subscriptionForUserAccount:;
@end
