@interface CalStoreSetupAndTeardownUtils : NSObject
+ (void)_enableLocalStoreIfNecessaryIgnoringAccount:inDatabase:accountStore:;
+ (BOOL)_mergeEntityType:fromStore:toStore:inDatabase:;
+ (void)removeStoreForAccount:withChildren:inDatabase:mainDatabase:accountStore:;
+ (BOOL)setUpCalStoreForParentAccount:withChildren:inDatabase:;
+ (void)cleanupAuxDatabaseIfNeededForAccountID:auxDatabase:mainDatabase:;
+ (void)setLocalStoreEnabled:inDatabase:;
+ (BOOL)_clearAllEventsFromStore:inDatabase:;
+ (id)copyStoreForAccount:withChildren:inDatabase:;
+ (BOOL)mergeEventsIntoLocalStoreFromStore:inDatabase:;
+ (BOOL)isReadOnlyAccount:;
+ (BOOL)drainLocalStoreInDatabase:;
+ (id)_copyStoreForAccountWithIdentifier:inDatabase:;
+ (BOOL)isStoreEmptyForAccount:inDatabase:;
+ (id)_copyStoreWithExternalIdentifier:inDatabase:;
+ (BOOL)isLocalStoreEmptyInDatabase:;
+ (BOOL)isLocalStoreEnabledInDatabase:;
+ (BOOL)clearAllEventsFromStoreForParentAccount:withChildren:inDatabase:;
+ (id)_calDAVInfoStringForTitle:;
+ (void)removeStoreForDeletedAccountWithIdentifier:inDatabase:mainDatabase:accountStore:;
+ (void)_cleanKeepAwayFromServerCalsInStore:;
+ (BOOL)mergeEventsFromLocalStoreIntoStore:inDatabase:;
@end
