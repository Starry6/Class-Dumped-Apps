@interface SAUISnippetEdited : SAUISnippetObjectInteraction
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)snippetEdited;
+ (id)snippetEditedWithDictionary:context:;
@end
