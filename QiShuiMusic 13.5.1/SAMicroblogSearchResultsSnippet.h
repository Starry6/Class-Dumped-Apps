@interface SAMicroblogSearchResultsSnippet : SAUISnippet
@property (nonatomic) NSArray searches;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)searches;
- (void)setSearches:;
+ (id)searchResultsSnippet;
+ (id)searchResultsSnippetWithDictionary:context:;
@end
