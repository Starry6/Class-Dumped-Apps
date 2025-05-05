@interface WebBookmarksSettingsGateway : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)schedulePasswordIconsCleanup;
- (void)getSafariWebDataUsageWithCompletion:;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:;
- (void)deleteSafariWebsiteDataRecord:completionHandler:;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:;
- (void)getSafariDataUsageByteCountWithCompletionHandler:;
- (void)clearAllSafariHistoryWithCompletionHandler:;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
@end
