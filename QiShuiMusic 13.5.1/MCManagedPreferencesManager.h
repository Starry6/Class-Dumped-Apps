@interface MCManagedPreferencesManager : NSObject
+ (id)managedPreferencesPathForDomain:;
+ (id)managedPreferencesForDomain:;
+ (BOOL)setManagedPreferences:forDomain:;
+ (BOOL)addManagedPreferences:toDomain:;
+ (BOOL)removeManagedPreferences:fromDomain:;
+ (void)sendManagedPreferencesChangedNotificationForDomains:;
+ (id)globalManagedPreferencesDomain;
+ (void)updateGlobalManagedPreferencesByAddingPreferences:removingPreferences:;
@end
