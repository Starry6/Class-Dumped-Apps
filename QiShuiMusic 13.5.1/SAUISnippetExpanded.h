@interface SAUISnippetExpanded : SAUISnippetObjectInteraction
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)snippetExpanded;
+ (id)snippetExpandedWithDictionary:context:;
@end
