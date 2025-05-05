@interface WBSPasswordBreachResults : NSObject
- (void)_saveResultsToPersistentStore;
- (void)clearRecentlyBreachedResultRecords;
- (void)clearAllResultsSynchronously;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void)addResultRecords:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)resultRecordsForQueries:;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (id)recentlyBreachedResultRecords;
@end
