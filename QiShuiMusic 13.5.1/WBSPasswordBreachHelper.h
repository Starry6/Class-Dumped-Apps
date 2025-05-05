@interface WBSPasswordBreachHelper : NSObject
- (void)clearAllRecordsWithCompletionHandler:;
- (void)runLookupSessionIgnoringMinimumDelay:completionHandler:;
- (void)getResultRecordDictionariesForResultQueryDictionaries:withCompletionHandler:;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:;
- (void)addResultRecordDictionaries:completionHandler:;
@end
