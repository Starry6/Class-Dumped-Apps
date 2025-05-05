@interface EMSearchableItemSnippetData : NSObject
@property (nonatomic) NSString searchableItemIdentifier;
@property (nonatomic) NSDictionary snippetHints;
- (void).cxx_destruct;
- (id)initWithSearchableItemIdentifier:snippetHints:;
- (id)searchableItemIdentifier;
- (void)setSearchableItemIdentifier:;
- (id)snippetHints;
- (void)setSnippetHints:;
@end
