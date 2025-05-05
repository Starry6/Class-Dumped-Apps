@interface CNUIUserActionCacheKeyGenerator : NSObject
+ (id)os_log;
+ (id)keyForContact:actionType:;
+ (id)descriptionOfActionType:;
+ (id)handlesForActionType:contact:;
+ (unsigned long long)propertiesForActionType:;
+ (id)fingerprintOfPhoneNumbers:;
+ (id)fingerprintOfEmailAddresses:;
+ (id)fingerprintOfPostalAddresses:;
+ (id)fingerprintOfSocialProfiles:;
+ (id)fingerprintOfInstantMessageAddresses:;
@end
