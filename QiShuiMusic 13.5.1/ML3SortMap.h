@interface ML3SortMap : NSObject
- (void).cxx_destruct;
- (BOOL)commitUpdates;
- (BOOL)insertStringsIntoSortMap:didReSortMap:;
- (id)initWithConnection:library:preloadNames:;
- (BOOL)loadExistingSortedEntries;
- (BOOL)attemptInsertStringsIntoSortMap:;
- (BOOL)commitFailedInsertedStrings:;
- (id)_sortedNameEntriesToInsertForNames:;
- (BOOL)_insertSortedNameEntriesIntoSortMap:;
- (id)_minSortKeyForEntry:iPhoneSortKeyBuilder:;
- (id)_maxSortKeyForEntry:iPhoneSortKeyBuilder:;
- (long long)_minNameOrderForSortMapEntry:iPhoneSortKeyBuilder:;
- (long long)_maxNameOrderForSortMapEntry:iPhoneSortKeyBuilder:;
- (long long)_sortKeyDistance:sortKey2:offset:;
- (id)_sortKeyString:;
- (id)nameOrders;
@end
