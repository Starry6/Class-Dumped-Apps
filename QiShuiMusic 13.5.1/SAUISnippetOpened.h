@interface SAUISnippetOpened : SAUISnippetObjectInteraction
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)snippetOpened;
+ (id)snippetOpenedWithDictionary:context:;
@end
