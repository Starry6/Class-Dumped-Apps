@interface SAUIConfirmSnippet : SAUISnippetInteraction
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)confirmSnippet;
+ (id)confirmSnippetWithDictionary:context:;
@end
