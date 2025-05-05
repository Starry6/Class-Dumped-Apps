@interface CADRealCalendarDatabaseDataProvider : NSObject
- (id)storeIDForStore:inDatabase:;
- (int)suggestionsCalendarRowIDInDatabase:;
- (int)naturalLanguageSuggestionsCalendarRowIDInDatabase:;
- (id)accountIDForStore:inDatabase:;
- (BOOL)isStoreDelegate:inDatabase:;
- (int)databaseID:;
- (void)gatherCalendarRowIDs:inStore:inDatabase:;
- (BOOL)isLocalStore:inDatabase:;
- (id)storesInDatabase:;
+ (id)realDataProvider;
@end
