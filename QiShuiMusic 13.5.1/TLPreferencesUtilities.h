@interface TLPreferencesUtilities : NSObject
+ (void)migratePerTopicPreferencesInDomain:withRegularPreferenceKeys:regularPreferenceKeysCount:intoSinglePerTopicPreferenceWithSuffix:usingPreferencesScope:;
+ (void)_setValue:forKey:inDomain:usingPreferencesScope:;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:inDomain:usingPreferencesScope:withBlock:;
+ (id)preferencesDomain;
+ (id)_copyAllKeysAndValuesFromDomain:usingPreferencesScope:;
+ (BOOL)canAccessNanoRegistry;
+ (BOOL)_valueForEntitlement:task:;
+ (void)_synchronizeDomain:usingPreferencesScope:;
+ (id)copySharedResourcesPreferencesDomainForDomain:;
+ (id)copySharedResourcesPreferencesDomain;
+ (id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:regularPreferenceKeysCount:;
+ (id)perWatchPreferencesDomain;
@end
