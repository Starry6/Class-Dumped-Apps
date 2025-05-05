@interface WBSResultRanker : NSObject
+ (id)searchParameters;
+ (void)setSearchParameters:;
+ (id)filterOutUnlikelyMatchesFromMatches:forQuery:rewrittenQuery:;
+ (id)dedupeSameTitleHistoryResults:withMobile:withTophits:withTabs:;
+ (BOOL)allowLooserMatching:;
+ (id)_visibleURLtoDisplayedURL:;
+ (id)_dropQueryPart:;
+ (id)_simplifyURLForHistoryDedupe:withMobile:;
+ (void)_trackTitlesAndURLs:withMobile:withBase:withSimplified:;
+ (void)_trackTitleAndURLSingle:withMobile:withBase:withSimplified:;
+ (BOOL)_shouldDedupeResult:withMobile:withBase:withSimplified:;
+ (id)dedupeSameTitleHistoryResults:withMobile:withTophits:withTabs:cloudTabs:;
+ (id)filterDuplicateTopHits:;
+ (BOOL)matchNavigationIsClientOrServerError:;
+ (BOOL)includeBookmarksAndHistory:;
@end
