@interface WBSHistoryURLCompletionDataStore : NSObject
- (id)initWithHistoryService:;
- (void).cxx_destruct;
- (void)getSnapshotWithCompletionHandler:;
- (id)_completionItemFromRow:;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:usingBlock:;
- (id)_completionItemFromDatabase:withVisitDatabaseID:;
- (void)_loadFromDatabaseIfNecessary;
@end
