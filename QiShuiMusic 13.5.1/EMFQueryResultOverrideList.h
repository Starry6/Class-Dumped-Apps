@interface EMFQueryResultOverrideList : NSObject
- (void).cxx_destruct;
- (id)initWithOverrideListURL:;
- (id)overriddenResultsForQuery:;
- (id)overriddenResultsForQuery:searchType:;
- (id)_metadataForString:;
- (id)_overriddenResultsRawStringExactMatchForRawString:andSearchType:;
- (id)_overriddenResultsRawStringExactMatchForQuery:;
- (id)_overriddenResultsTokenExactMatchForQuery:;
- (id)_overriddenResultsRawStringPrefixMatchForQuery:;
- (id)_overriddenResultsTokenPrefixMatchForQuery:;
@end
