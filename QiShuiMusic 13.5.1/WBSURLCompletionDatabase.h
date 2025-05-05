@interface WBSURLCompletionDatabase : NSObject
@property (nonatomic) <WBSURLCompletionDataSource> dataSource;
- (void)setDataSource:;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)getBestMatchesForTypedString:topHits:matches:limit:forQueryID:withSearchParameters:;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:;
- (void)clearBookmarkMatchesCaches;
- (void)clearHistoryMatchesCache;
- (void)clearMatchesCaches;
- (void)_getSortedFullTextMatchesForTypedString:topHits:historyMatches:historyLimit:bookmarkMatches:bookmarkLimit:searchParameters:;
- (void)_getSortedPrefixMatchesForTypedString:topHits:historyMatches:historyLimit:bookmarkMatches:bookmarkLimit:searchParameters:;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:;
- (void)_getSortedMatchesForTypedString:topHits:historyMatches:historyLimit:bookmarkMatches:bookmarkLimit:searchParameters:prefixMatchesOnly:;
- (void)_getUnsortedFullTextMatchesForTypedString:historyMatches:bookmarkMatches:dataTypes:;
- (void)_getUnsortedPrefixMatchesForTypedString:historyMatches:bookmarkMatches:;
+ (void)initializeURLCompletionOnMainThread;
+ (BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:;
@end
