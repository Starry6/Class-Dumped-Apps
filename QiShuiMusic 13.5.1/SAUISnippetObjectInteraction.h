@interface SAUISnippetObjectInteraction : SAUISnippetInteraction
@property (nonatomic) SADomainObject object;
- (void)setObject:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)object;
+ (id)snippetObjectInteraction;
+ (id)snippetObjectInteractionWithDictionary:context:;
@end
