@interface SSVPlayActivityTable : NSObject
@property (nonatomic) Q currentEventsRevision;
@property (nonatomic) NSString eventsRevisionVersionToken;
- (id)init;
- (void).cxx_destruct;
- (void)performTransactionWithBlock:;
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
+ (id)databasePath;
+ (BOOL)_setupDatabase:;
+ (id)_eventsDatabaseTableName;
+ (id)_propertiesDatabaseTableName;
@end
