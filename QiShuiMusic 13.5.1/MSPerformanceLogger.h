@interface MSPerformanceLogger : MSASModelBase
- (id)init;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:currentVersion:;
- (void)_logSqliteErrorLine:;
- (void)startOperation:itemGUID:;
- (void)stopOperation:itemGUID:;
- (void)dbQueueDiscardOperation:itemGUID:;
- (void)discardOperation:itemGUID:;
- (void)summarizeOperation:itemGUID:formatBlock:;
+ (id)sharedLogger;
+ (void)nukeCompletionBlock:;
@end
