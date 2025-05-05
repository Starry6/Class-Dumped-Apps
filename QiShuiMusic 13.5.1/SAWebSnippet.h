@interface SAWebSnippet : SAUISnippet
@property (nonatomic) NSArray webSearch;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)webSearch;
- (void)setWebSearch:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
