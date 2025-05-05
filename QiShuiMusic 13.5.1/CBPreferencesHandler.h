@interface CBPreferencesHandler : NSObject
+ (void)consistencyCheckForUser:;
+ (BOOL)storePreferenceForUser:withKey:andValue:;
+ (BOOL)storeNestedPreferenceForAllUsersWithKey1:key2:key3:andValue:;
+ (BOOL)migrateNestedPreferenceForAllUsersWithKey1:key2:toKey:;
+ (BOOL)storePreferenceForAllUsersForKey:andValue:;
+ (id)copyPreferenceForUser:forKey:;
+ (id)copyNestedPreferenceForKey1:key2:;
+ (id)copyNestedPreferenceForKey1:key2:key3:;
+ (id)copyPreferenceForAllUsersForKey:;
+ (id)copyPreferenceForAllUsersMultiple:;
+ (BOOL)storePreferenceForAllUsersMultiple:;
+ (id)copyPreferenceDictionaryForUser:;
@end
