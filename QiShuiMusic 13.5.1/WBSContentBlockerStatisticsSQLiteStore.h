@interface WBSContentBlockerStatisticsSQLiteStore : NSObject
- (void)_clearStatisticsForDomain:;
- (void)_deleteDatabase;
- (void)clearStatisticsForDomains:;
- (BOOL)_openDatabaseIfNeeded;
- (void)_clearStatisticsAfter:before:;
- (void)_deleteUnusedDomains;
- (void)clearStatisticsAfter:before:;
- (void)_closeDatabaseOnDatabaseQueue;
- (BOOL)_createDatabaseSchemaIfNeeded;
- (long long)_idForThirdPartyWithHighLevelDomain:;
- (void).cxx_destruct;
- (void)recordThirdPartyResourceBlocked:onFirstParty:completionHandler:;
- (void)blockedThirdPartiesAfter:before:onFirstParty:completionHandler:;
- (void)clearAllStatisticsWithCompletionHandler:;
- (void)blockedThirdPartiesAfter:before:completionHandler:;
- (long long)_schemaVersion;
- (id)initWithDatabaseURL:;
- (long long)_idForFirstPartyWithHighLevelDomain:;
- (void)closeDatabase;
- (BOOL)_tryOpenDatabase:;
+ (id)_defaultDatabaseURL;
+ (id)standardStore;
@end
