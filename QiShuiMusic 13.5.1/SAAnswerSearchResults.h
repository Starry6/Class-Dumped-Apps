@interface SAAnswerSearchResults : SADomainSearchResults
@property (nonatomic) NSArray results;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)searchResults;
+ (id)searchResultsWithDictionary:context:;
@end
