@interface CSTopHitSearchQuery : CSUserQuery
- (BOOL)isTopHitQuery;
- (id)initWithUserString:queryContext:;
- (void)handleFoundSuggestions:;
- (void)_handleBatches:;
- (id)initWithSearchString:keyboardLanguage:attributes:hitCount:;
- (void)userEngagedWithResult:interactionType:;
- (void)handleFoundItems:;
- (void).cxx_destruct;
- (unsigned long long)dispatchApplyWidth;
- (void)handleCompletion:;
- (id)initWithQueryString:context:;
- (void)handleFoundCompletions:;
@end
