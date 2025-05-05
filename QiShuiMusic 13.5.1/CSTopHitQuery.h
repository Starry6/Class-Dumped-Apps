@interface CSTopHitQuery : CSUserQuery
- (BOOL)isTopHitQuery;
- (id)initWithUserString:queryContext:;
- (id)initWithQueryString:queryContext:;
- (id)initWithUserQueryString:queryContext:;
- (void)filterRankedResults:hitCount:;
- (void)handleFoundItems:;
- (void)handleBatches:;
- (void).cxx_destruct;
- (unsigned long long)dispatchApplyWidth;
- (void)handleCompletion:;
- (id)initWithQueryString:context:;
+ (void)sortSearchableItemsByL2:;
@end
