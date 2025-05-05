@interface WBSRecentWebSearchesController : NSObject
- (void).cxx_destruct;
- (void)_addLegacySearch:;
- (void)_removeLegacyRecentSearchesData;
- (void)_saveRecentSearchDictionaries:toUserDefaultsUsingKey:;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:;
- (void)_migrateLegacyData;
- (void)addRecentSearch:;
- (id)recentSearches;
- (id)recentSearchesMatchingPrefix:;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:;
- (void)_addRecentSearchEntry:;
- (void)_saveRecentSearches;
- (id)_recentSearchesDictionaries;
- (void)_loadRecentSearchesIfNeeded;
+ (id)_defaultsKey;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (BOOL)_shouldTrackSearches;
@end
