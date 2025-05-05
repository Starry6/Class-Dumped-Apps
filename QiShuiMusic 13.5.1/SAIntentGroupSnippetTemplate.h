@interface SAIntentGroupSnippetTemplate : SADomainObject
@property (nonatomic) SAUISnippet detailSnippet;
@property (nonatomic) NSArray intentSlotKeyPaths;
@property (nonatomic) NSString key;
- (id)groupIdentifier;
- (id)key;
- (void)setKey:;
- (id)encodedClassName;
- (id)detailSnippet;
- (void)setDetailSnippet:;
- (id)intentSlotKeyPaths;
- (void)setIntentSlotKeyPaths:;
+ (id)snippetTemplate;
+ (id)snippetTemplateWithDictionary:context:;
@end
