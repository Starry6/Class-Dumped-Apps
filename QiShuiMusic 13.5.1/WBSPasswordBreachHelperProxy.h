@interface WBSPasswordBreachHelperProxy : NSObject
- (id)init;
- (void)dealloc;
- (id)_remoteObjectProxyWithErrorHandler:;
- (void).cxx_destruct;
- (void)clearAllRecordsWithCompletionHandler:;
- (void)invalidate;
- (void)runLookupSessionIgnoringMinimumDelay:completionHandler:;
- (void)getResultRecordDictionariesForResultQueryDictionaries:withCompletionHandler:;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:;
- (void)addResultRecordDictionaries:completionHandler:;
@end
