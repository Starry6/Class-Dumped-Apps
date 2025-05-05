@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject
- (void)dealloc;
- (void)_historyItemsWereRemoved:;
- (void).cxx_destruct;
- (void)_historyWasCleared:;
- (void)removeURLStrings:;
- (id)urlStrings;
- (id)initWithStoreURL:history:;
- (BOOL)containsURLString:;
- (void)addURLString:;
- (void)removeAllURLStrings;
- (id)_bannedURLStringsToEntriesMap;
- (void)_writeOutBannedURLStringsAsynchronously;
@end
