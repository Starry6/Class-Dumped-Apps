@interface WBSParsecSearchResultCache : NSObject
@property (nonatomic) NSArray allCachedQueries;
- (void).cxx_destruct;
- (id)initWithCachedQueriesLimit:;
- (void)cacheResultSetsFromSearchResponse:;
- (void)cacheResultSet:;
- (id)bestResultSetForQuery:;
- (id)resultSetWithQuery:;
- (id)allCachedQueries;
- (BOOL)_shouldCacheResultSetForQueryMatching:;
- (BOOL)_resultSet:isMatchForQuery:;
@end
