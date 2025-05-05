@interface CHSearchQuery : CHQuery
@property (nonatomic) NSArray foundItems;
@property (nonatomic) NSString queryString;
@property (nonatomic) BOOL caseMatchingOnly;
@property (nonatomic) BOOL fullWordsOnly;
- (void)stop;
- (id)debugName;
- (void)setQueryString:;
- (void).cxx_destruct;
- (id)queryString;
- (id)foundItems;
- (void)setFullWordsOnly:;
- (void)setCaseMatchingOnly:;
- (id)initWithRecognitionSession:;
- (void)q_updateQueryResult;
- (id)q_foundItemsForSearchString:sessionResult:;
- (void)_enumerateMatchesForStrokeGroupResult:locales:queryString:usingBlock:;
- (BOOL)_findMatchingTokenPathInResult:initialTokenLocation:queryString:fromIndex:coveredStrokeIndexes:reverseMatchedTokens:;
- (BOOL)_isMatchSeparatorBeforeToken:atLocation:inResult:queryString:fromIndex:matchedLength:;
- (BOOL)_isMatchStringForToken:queryString:fromIndex:matchedLength:;
- (void)_setFoundItems:;
- (BOOL)caseMatchingOnly;
- (BOOL)fullWordsOnly;
@end
