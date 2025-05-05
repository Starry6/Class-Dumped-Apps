@interface ICPlayActivityTable : NSObject
@property (nonatomic) Q currentEventsRevision;
@property (nonatomic) NSString eventsRevisionVersionToken;
- (id)initWithDatabasePath:;
- (id)init;
- (void).cxx_destruct;
- (void)performTransactionWithBlock:;
- (BOOL)_removeDatabaseReturningError:;
- (unsigned long long)currentEventsRevision;
- (void)setCurrentEventsRevision:;
- (id)eventsRevisionVersionToken;
- (BOOL)insertPlayActivityEvent:withRevision:returningError:;
- (BOOL)getPlayActivityEvents:relevantRevisionsIndexSet:withStartRevision:endRevision:additionalRevisionsIndexSet:ignoredRevisionsIndexSet:error:;
- (BOOL)getPlayActivityEvents:relevantRevisionsIndexSet:withStartRevision:endRevision:storeAccountID:additionalRevisionsIndexSet:ignoredRevisionsIndexSet:error:;
- (BOOL)removePlayActivityEventsUpToRevision:returningError:;
- (id)revisionsIndexSetForPlayActivityEvents:;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:;
- (BOOL)_getPlayActivityEvents:relevantRevisionsIndexSet:withStartRevision:endRevision:storeAccountID:shouldFilterStoreAccountID:additionalRevisionsIndexSet:ignoredRevisionsIndexSet:error:;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:count:;
- (BOOL)_setValue:forDatabasePropertyKey:;
- (id)_valueForDatabasePropertyKey:;
+ (BOOL)_setupDatabase:;
+ (void)_migrateDatabaseFiles;
+ (id)_defaultDatabasePath;
+ (id)_eventsDatabaseTableName;
+ (id)_propertiesDatabaseTableName;
@end
