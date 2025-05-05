@interface SAUIAlternateProviderSnippet : SAUISnippet
@property (nonatomic) NSArray alternateProviderResults;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)alternateProviderResults;
- (void)setAlternateProviderResults:;
+ (id)alternateProviderSnippet;
+ (id)alternateProviderSnippetWithDictionary:context:;
@end
