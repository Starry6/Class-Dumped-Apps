@interface CHPrefixQuery : CHQuery
@property (nonatomic) NSString prefix;
@property (nonatomic) NSSet validSuffixes;
@property (nonatomic) NSArray foundItems;
- (void)stop;
- (id)debugName;
- (id)prefix;
- (void).cxx_destruct;
- (id)foundItems;
- (void)setValidSuffixes:;
- (id)validSuffixes;
- (void)q_updateQueryResult;
- (void)_setFoundItems:;
- (id)initWithRecognitionSession:prefix:validSuffixes:delimiters:;
- (id)_normalizeString:;
- (id)_normalizeSuffixes:;
- (BOOL)_isTokenStringMatchingQuery:allowPartialMatching:;
- (id)_queryResultForTokens:groupResult:candidateGroup:;
- (id)_stringForTokens:;
- (id)_prefixQueryResultsForSessionResult:;
+ (id)hashtagQueryForRecognitionSession:;
+ (id)mentionQueryForRecognitionSession:;
+ (id)prefixQueryWithPrefix:forRecognitionSession:;
+ (id)hashtagDelimiters;
@end
