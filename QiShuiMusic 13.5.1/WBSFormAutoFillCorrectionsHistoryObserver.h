@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject
- (void)dealloc;
- (void)_historyItemsWereRemoved:;
- (void).cxx_destruct;
- (void)_historyWasCleared:;
- (id)initWithCorrectionsStore:;
- (void)_historyVisitsWereRemoved:;
- (void)flushPendingChangesAndDisconnectFromStoreAndHistory;
- (void)_invalidateUpdateCoalescingTimer;
- (void)_updateCorrectionsStoreSoon;
- (id)_normalizeURL:;
- (void)_updateCorrectionsStoreNow;
@end
