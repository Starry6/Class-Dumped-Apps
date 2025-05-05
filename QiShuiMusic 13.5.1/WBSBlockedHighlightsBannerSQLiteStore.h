@interface WBSBlockedHighlightsBannerSQLiteStore : NSObject
- (void)_configureDatabase;
- (void)_openDatabaseIfNeeded;
- (void)_openDatabase;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_createDatabaseSchemaIfNeeded;
- (void).cxx_destruct;
- (long long)_schemaVersion;
- (id)initWithDatabaseURL:;
- (void)closeDatabase;
- (void)fetchAllBlockedHighlightsWithCompletionHandler:;
- (void)storeBlockedHighlightWithIdentifier:completionHandler:;
- (void)verifyIfHighlightIsBlockedWithIdentifier:completionHandler:;
- (void)clearAllBannedHighlightsWithCompletionHandler:;
- (void)clearBlockedBannerHighlightsAfterDate:beforeDate:withCompletionHandler:;
- (void)removeBlockedBannerhighlightWithIdentifier:completionHandler:;
+ (id)defaultDatabaseURL;
@end
