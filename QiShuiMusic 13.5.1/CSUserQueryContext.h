@interface CSUserQueryContext : CSSearchQueryContext
@property (nonatomic) BOOL enableRankedResults;
@property (nonatomic) q maxResultCount;
@property (nonatomic) q maxSuggestionCount;
- (BOOL)enableRankedResults;
- (void)setMaxResultCount:;
- (long long)maxResultCount;
- (void)setEnableRankedResults:;
+ (id)userQueryContextWithCurrentSuggestion:;
+ (id)userQueryContext;
@end
