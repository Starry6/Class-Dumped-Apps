@interface SAUICancelSnippet : SAUISnippetInteraction
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)cancelSnippet;
+ (id)cancelSnippetWithDictionary:context:;
@end
