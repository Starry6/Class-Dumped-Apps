@interface SAMacFileSearchView : SAAceView
@property (nonatomic) NSArray entities;
@property (nonatomic) q numResults;
@property (nonatomic) NSString query;
@property (nonatomic) NSString searchTitle;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (id)entities;
- (void)setEntities:;
- (id)encodedClassName;
- (long long)numResults;
- (void)setNumResults:;
- (id)searchTitle;
- (void)setSearchTitle:;
+ (id)fileSearchView;
+ (id)fileSearchViewWithDictionary:context:;
@end
