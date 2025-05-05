@interface SFCompletionList : NSObject
+ (void)resetSearchParameters;
+ (void)setSearchParameter:toValue:;
+ (void)resultsForQuery:completion:;
+ (void)_resultsForQueryLegacy:completion:;
+ (id)_getResultSections:topHitMatches:;
+ (id)_filterSearchLinks:;
@end
